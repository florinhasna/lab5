#include <iostream>

int main(){
  int userInput;
  std::cout << "Enter an integer: ";
  std::cin >> userInput;

  for (int i = 0; i <= userInput; i++){
    std::cout << "Primes to " << userInput << " are: ";
  }
    
  return 0;
}
