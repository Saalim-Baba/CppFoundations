#include <iostream>

int main(){
    //Double, numbers with decimal
    double decimal = 3.5;

    //Integer, no decimal, only full numbers
    int integer = 5;

    //Char, single characters
    char initial = 'A';

    //Boolean, true or false values
    bool active = false;

    //String, a sequence of text
    std::string string = "I'm a string";

    //What if you declare a decimal with a int declaration?
    int testing_dec = 5.52;
    std::cout << testing_dec << std::endl; //Output: 5 => double turned into a integer
    
    //What if you declare a char with more than one character?
    char testing_char = 'EA';
    std::cout << testing_char << std::endl; //Output: A => Char forces only last letter
   
    return 0;
}