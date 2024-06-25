#include <iostream>


// cin >> for inputs/extraction operator

int main(){
    
    std::string name;

    std::cout << "Your name:";
    std::getline(std::cin, name);

    /* 
    std::cin >> name; if you do it like this and a person could potentially input a string with spaces
    then you must use std::getline(std::cin, name) instead, otherwise it'll use just the first word
    */
   std::cout << name;

    return 0;
}