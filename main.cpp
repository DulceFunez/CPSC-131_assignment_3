#include <iostream>

#include "check_expression.h"

int main() {
    // This is the variable for the input
    std::string expression = " ";
    
    // This ask for the input or expression
    std::cout << "Insert expression" << std::endl;
    std::cout << "--> ";
    std::cin >> expression;
    
    // This calls the function that check if the expression 
    // is balanced or not
    check_the_expression(expression);

}