#include <iostream>


// cin >> for inputs/extraction operator

int main(){
    
    std::string name;

    std::cout << "Your name:";
    std::getline(std::cin >> std::ws, name);

    /* 
    std::cin >> name; if you do it like this and a person could potentially input a string with spaces
    then you must use std::getline(std::cin, name) instead, otherwise it'll use just the first word
    std::ws is to delete all newline characters or any whitespaces before user_input
    */
   std::cout << name;

    return 0;
}