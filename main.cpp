#include <iostream>

#include "check_expression.h"

int main() {
    std::string expression = " ";

    std::cout << "Insert expression" << std::endl;
    std::cout << "--> ";
    std::cin >> expression;

    check_the_expression(expression);

}