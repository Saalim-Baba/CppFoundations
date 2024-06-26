#include <iostream>

int main(){
    // If statements give you the options to give conditions, if its true
    // if it doesn't apply, it doesn't do it

    int year;

    std::cout << "What year do we have: ";
    std::cin >> year;

    /* If using stuff like age like this (if age >= 18) be aware that you are including everything over 18
    So if you intend to restrict it to under 100 years old, you have to put the if statement for the 
    100 years first and the 18 in a else if statement so it gets checked first and moves on.
    */
    
    if(year == 2024){
        std::cout << "It's correct, the year given is " << year;
    }
    else if(year < 2000){
        std::cout << "Wrong century buddy";
    }
    else{
        std::cout << "Nope, not the right year buddy";
    };

    return 0;
}