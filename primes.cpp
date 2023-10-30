#include <iostream>

int main(){
  // get user input
  int userInput;
  std::cout << "Enter an integer: ";
  std::cin >> userInput;

  // used to pass on if a numbers is prime
  bool isPrime = false;
  std::cout << "Primes to " << userInput << " are: 2 ";
  // from i to userInput inclusive, test all numbers
  for (int i = 3; i <= userInput; i++){

    // check if is prime
    for(int j = 2; j < i; j++)
      if (i % j != 0)
	isPrime = true;
    // if a divisor found, break loop
      else {
	isPrime = false;
	break;
      }

     // if i is prime, print.
     if (isPrime)
	std::cout << i << " ";
  }
    
  return 0;
}
