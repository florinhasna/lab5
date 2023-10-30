#include <iostream>

int main(){
  // get user input
  int userInput;
  std::cout << "Enter an integer: ";
  std::cin >> userInput;

  // used to pass on if a numbers is prime
  bool isPrime = false;
  // declare and initialise first prime number
  int firstPrime = 2;
  std::cout << "Primes to " << userInput << " are: " << firstPrime << " ";
  // from i to userInput inclusive, test all numbers
  // where i is the next number after firstPrime
  for (int i = firstPrime + 1; i <= userInput; i++){

    // check if i is prime, where j starts with firstPrime
    for(int j = firstPrime; j < i; j++)
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
