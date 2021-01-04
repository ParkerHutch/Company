#include <iostream>
#include "company.h"

void Employee::printEmployeeInfo() {

    std::cout << "Employee #" << card.idNum << "(" 
        << card.name << ") is " << age 
        << " years old and has an hourly wage of " 
        << wage << ".\n";

}

int main() {

    Employee joe;
    joe.card = CompanyCard{"Joe", 1};
    joe.age = 34;
    joe.wage = 500;

    // Uniform Initialization
    Employee sally = Employee{CompanyCard{"Sally", 2}, 43, 600};

    joe.printEmployeeInfo();
    sally.printEmployeeInfo();

}