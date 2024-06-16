#include <iostream>

int main(){
    /*
    Assign a earlier assigned variable to a new datatype
    This example: A exam with 15 questions, you got 12 right. How much percent did you get right?
    If used without the (double) it would get truncated and the result would be 0%
    */

   int max_score = 15;
   int score = 12;
   int result = score/(double)max_score * 100;

   std::cout << result << "%";

    return 0;
}