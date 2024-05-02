#include "check_expression.h"

void check_the_expression(std::string expression) {
    // this variable is the stack
    std::stack<char> thestack;

    // this is a loop that goes through each character in the expression
    for(char parenthesis: expression) {
        // this does different operations depending on the character
        switch (parenthesis) {
            // if the character is an open parentheis, it is push to the stack
            case '(':
                thestack.push(parenthesis);
                break;
            // if the character is a closed parenthesis, it will pop an open
            // parenthesis out of the stack
            case ')': 
                // if the next character is a closed parenthesis but the stack is empty,
                // the closed parenthesis is added to the stack.
                if (thestack.empty() == true) {
                    thestack.push(parenthesis);
                } else {
                    thestack.pop();
                }
                break;    
        }
    std::cout << thestack.size();
    }
    // this if statement checks if the stack is empty or not to check if is balanced or not
    if (thestack.empty()) {
        std::cout << std::endl << "The expression is Balanced\n";
    } else {
        std::cout << std::endl << "The expression is Not Balanced\n";
    }
}


