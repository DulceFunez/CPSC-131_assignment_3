#include "check_expression.h"

void check_the_expression(std::string expression) {
    std::stack<char> thestack;
    
    for(char parenthesis: expression) {
        switch (parenthesis) {
            case '(':
                thestack.push(parenthesis);
                break;
            case ')':
                thestack.pop();
                break;    
        }
    }
    
    if (thestack.empty()) {
        std::cout << std::endl << "The expression is Balanced\n";
    } else {
        std::cout << std::endl << "The expression is Not Balanced\n";
    }
}


