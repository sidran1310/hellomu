/**
 * @file MyProgram.cpp
 * @brief This file contains the implementation of the MyProgram class.
 */

#include "MyProgram.h"
#include <iostream>

/// Constructor implementation
MyProgram::MyProgram() {
    exampleVar = 0; ///< Initialize the example variable
}

/// Prints a greeting message
void MyProgram::sayHello() {
    std::cout << "Hello, welcome to MyProgram!" << std::endl;
}
