#include <iostream>

int main(){
    // If statements give you the options to give conditions, if its true
    // if it doesn't apply, it doesn't do it

    int year;

    std::cout << "What year do we have: ";
    std::cin >> year;
    
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