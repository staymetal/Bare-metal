#include <iostream>
int main(){

  char name[10];

  std::cout << "Enter your name";

  std::cin.get(name,9);

  /* The last byte goes to '/0' null terminator.
     Careful!. Dont use cin only ! You might overwrite the buffer */

  std::cout << "Hi " << name;
  return 0;
  



}
