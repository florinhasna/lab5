#include <iostream>
#include <vector>

int main(){
  int grade;
  std::vector<int> gradesArray;
  int count = 1;

  while(grade != -1){
    std::cout << "Enter grade (or -1 to end): "; 
    std::cin >> grade;
    
    gradesArray.push_back(count);

    gradesArray[count - 1] = grade;
    
    count++;
  }

  return 0; 
}
