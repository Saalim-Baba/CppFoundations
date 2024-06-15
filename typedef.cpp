#include <iostream>

/*
typedef is for refering a datatype to another name, in this example we're assigning string to the name
text_t, the _t is to say "type"
This is for various reason, why a datatype is way to long to write like vector and it reduces typeos
*/
typedef std::string text_t;
/*
Theres an alternative for typedef that is more compatable with templates, "using"
*/
using text_t = std::string;
int main(){
    text_t output = "Hello World! Im milaasHD";

    std::cout << output << std::endl;

    return 0;
}