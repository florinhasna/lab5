#include <iostream>
using namespace std;

int main(){
  int desiredNumbers = 10;
  // create an array to store generated numbers
  int randomNumbers[10];

  // loop to generate 10 numbers and add to the vector
  for (int i = 0; i < desiredNumbers; i++){
    int generatedNumber = rand() % (100 + 1 - 0) + 0;
    randomNumbers[i] = generatedNumber;
    cout << randomNumbers[i] << endl;
  }
  
  return 0;
}
