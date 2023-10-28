#include <iostream>
#include <vector>

int main(){
  // initialize an integer to store grade input
  int grade;
  
  // initialize a vector
  std::vector<int> gradesVector;

  // loop to read user data 100 times
  for (int i = 0; i < 100; i++){
    std::cout << "Enter grade (or -1 to end): "; 
    std::cin >> grade;

    // end the loop if the user chose so
    if (grade == -1)
      break;

    // increase vector length by 1
    gradesVector.push_back(i + 1);

    // add the grade to the vector
    gradesVector[i] = grade;
  }
  
  return 0; 
}
