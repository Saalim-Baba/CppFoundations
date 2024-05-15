#include <iostream>

int main(){
    double decimal = 3.5; //numbers with decimal
    int integer = 5; //integer, no decimal, only full numbers

    std::cout << decimal << std::endl; //output 3.5

    //What if you declare a decimal with a int declaration?
    int testing_dec = 5.52;
    std::cout << testing_dec << std::endl; //output 5
    //C++ ignores everything behind the period and just uses the first bit.
    return 0;
}