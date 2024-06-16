#include <iostream>

int main(){
    /*
    You can calculate using arithmetic operators like you're fond of in math
    Using these operators (+,-,*,/)
    */

    int integer = 12;

    //Add to variable
    integer = integer + 1;
    //alternative for this (short version and more common)
    integer+= 1;
    //If you only want to add ONE, you can use the increment operator
    integer++;

    //Subtract from variable
    integer = integer - 1;
    //alternative for this (short version and more common)
    integer-= 1;
    //increment operator for ONE
    integer--;

    //Multiply variable
    integer = integer * 2;
    //alternative for this (short version)
    integer*= 2;

    //Divide variable
    integer = integer / 2;
    //alternative for this (short version)
    integer /= 2;

    /*
    Important note to this section, be careful which datatype you choose for the variable
    If you use an int and divide you will get a full number even if its supposed to be a 
    decimal. Thats called "truncated". To avoid this use the datatype "double"
    */

   //Modulo Operator, lets you check if there is a rest after dividing
   int bugs = integer % 2;

   std::cout << integer << std::endl;
   std::cout << bugs;

    return 0;
}