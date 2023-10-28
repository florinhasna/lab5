#include <iostream>
#include <vector>

int main(){
  // initialize an integer to store grade input
  double grade;
  
  // initialize a vector
  std::vector<int> gradesVector;

  // declare a result variable
  double averageResult = 0;

  // loop to read user data 100 times
  for (int i = 0; i <= 100; i++){
    std::cout << "Enter grade (or -1 to end): "; 
    std::cin >> grade;

    // end the loop if the user chose so or already 100 grades stored
    if (grade == -1 || i == 100){
      // get the number of grades in vector
      int numberOfGrades = gradesVector.size();

      // calculate average
      averageResult = averageResult / numberOfGrades;

      // stop looping
      break;
    }
    // increase vector length by 1
    gradesVector.push_back(i + 1);

    // add the grade to the vector
    gradesVector[i] = grade;

    // add the grade to the averageResult
    averageResult += grade;
  }

  // print result
  if (averageResult > 0)
    std::cout << "The average of the grades is: " << averageResult << std::endl;

  // no grade input
  else
    std::cout << "No grades entered." << std::endl;

  
  return 0; 
}
