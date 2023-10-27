#include <iostream>
using namespace std;

int main(){
  // declare two integers
  int num1, num2;
  // prompt user
  std::cout << "Enter two numbers: ";
  // read input
  std::cin >> num1 >> num2;

  // declare and initialise a variable to store result
  int result = 0;

  // iterates all the value in the range num1 - num2 and adds it to result
  for (int i = num1; i <= num2; i++)
    result = result + i;

  // print result
  std::cout << "The sum from " << num1 << " to " << num2;
  std::cout << " is " << result << endl;
}
