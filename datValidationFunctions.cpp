#include "datValidationFunctions.h"
using namespace std;



bool isCorrect(char* s) {
    //first get the len of the array
    int len;
    len = string(s).length();
    bool error = false;
    for (int i = 0; i < len; i++){

        if ((toupper(s[i]) < 'A' || toupper(s[i]) > 'Z') && s[i] != ' ')
            error = true;
    }
  return error;

}//end of function


//for numbers
bool isCorrect(std::string value) {
    // get the value as string for testing each digit
    bool error = false;
    for (auto n : value)
       if ((n < '0' || n> '9') && (n != '.')) error = true;
    return error;
}//end of function





/* for numbers especially double
template <typename myType>
void isCorrect(myType& value) {
    // get the value as string for testing each digit
    std::string amount;
    bool error = 0;
    std::cin >> amount;
    while (!error) {
        for (auto n : amount)
            if ((n < '0' || n> '9') && (n != '.'))	error = 1;

        if (error == 1) {
            std::cout << "\n\t\t\t -->Faulty value! Try again...\n";
            std::cout << "\n\t\t\tEnter again:";
            std::cin >> amount;
            error = 0;
        }
        else break;
    }//end of while

    value = stod(amount);
}//end of function*/

