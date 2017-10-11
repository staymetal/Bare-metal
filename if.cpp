#include <iostream>

int main(){

  int age ;

  std::cout << "Whats your age?" << std::endl;;

  std::cin >> age ;

  if(age > 18){

    std::cout << "You can drive " << std::endl;

  } else{

    std::cout << "You cant drive !!" << std::endl;
  }

  return 0;

}

  
