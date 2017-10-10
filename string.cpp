#include <iostream>
#include <string.h>
int main(){

  char myword[6] = "Surya";

  char mycopy[7];

  // using C's strcpy function from string.h header file

strcpy(mycopy,myword);

std::cout << myword << "Size : " << sizeof(myword) << std::endl;

std::cout << mycopy << "Size : " << sizeof(mycopy) << std::endl;

// using C++ 's strncpy function to avoid overflows as it sets the limit for copying characters

 char surname[] = "Gyllenhaal";

 char copysurname[18];

 strncpy(copysurname,surname,18);

 std::cout << "Surname : " << surname << std::endl;

 std::cout << "Copy : " << copysurname << std::endl;
 

return 0;


}
