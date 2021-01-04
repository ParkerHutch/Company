#include <iostream>
#include "employee.h"

void Employee::printEmployeeInfo() {

    std::cout << "Employee #" << card.idNum << "(" 
        << card.name << ") is " << age 
        << " years old and has an hourly wage of " 
        << wage << ".\n";

}