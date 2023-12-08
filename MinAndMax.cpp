#include <iostream>
using namespace std;

int main(){
  const int DESIRED_NUMBERS = 10;
  // create an array to store generated numbers
  int randomNumbers[10];
  int min = 100;
  int max = 0;

  // loop to generate 10 numbers and add to the vector
  cout << "The elements are: ";
  for (int i = 0; i < DESIRED_NUMBERS; i++){
    int generatedNumber = rand() % (100 + 1 - 0) + 0;
    randomNumbers[i] = generatedNumber;

    if(randomNumbers[i] < min){
      min = randomNumbers[i];
    }
    if (randomNumbers[i] > max){
      max = randomNumbers[i];
    }

    cout << randomNumbers[i] << ", ";
  }

  cout << "\n" << "The minimum is: " << min << endl;
  cout << "The maximum is: " << max << endl;
  
  return 0;
}
