#include <iostream>

int main(){
    /*
    You can calculate using arithmetic operators like you're fond of in math
    Using these operators (+,-,*,/)
    */

    double codebases = 12;

    //Add to variable
    codebases = codebases + 1;
    //alternative for this (short version and more common)
    codebases+= 1;
    //If you only want to add ONE, you can use the increment operator
    codebases++;

    //Subtract from variable
    codebases = codebases - 1;
    //alternative for this (short version and more common)
    codebases-= 1;
    //increment operator for ONE
    codebases--;

    //Multiply variable
    codebases = codebases * 2;
    //alternative for this (short version)
    codebases*= 2;

    //Divide variable
    codebases = codebases / 2;
    //alternative for this (short version)
    codebases /= 2;

    /*
    Important note to this section, be careful which datatype you choose for the variable
    If you use an int and divide you will get a full number even if its supposed to be a 
    decimal. Thats called "truncated". To avoid this use the datatype "double"
    */

   std::cout << codebases << std::endl;

    return 0;
}