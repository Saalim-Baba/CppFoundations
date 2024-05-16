#include <iostream>

namespace first{
    int age = 12;
}

namespace second{
    int age = 13;
}

int main(){
    /*
    Names should always be unique so they don't get overwriten or confused with one another.
    That's why namespaces exist in greater projects, they allow names to coexist if they're each in their
    own seperate namespace.
    */

    int age = 11;

    //Declaring the variable inside function is still possible
    std::cout << "Last year I was " << age << " years old" << std::endl;

    //Declaring the variable in the first namespace and refrencing it with {namespace_name}::{variable_name}
    std::cout << "Today I'm " << first::age << " years old" << std::endl;
    std::cout << "Next year I'll be " << second::age << " years old" << std::endl;

    
    return 0;
}