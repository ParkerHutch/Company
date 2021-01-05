#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "employee.h"

namespace business {
    std::vector<std::string> firstNames = {
        "Joe", "John", "Carl", "Bart", "George", "Thomas", "Matthew", 
        "Sarah", "Sally", "Emily", "Carly", "Karen", "Michelle"
    };
    std::vector<std::string> lastNames = {
        "Johnson", "Baker", "Thompson", "Smith", "Scott", "Elliot"
    };

    void Employee::printEmployeeInfo() {

        std::cout << "Employee #" << card.idNum << "(" 
            << card.name << ") is " << age 
            << " years old and has an hourly wage of " 
            << wage << ".\n";

    }

    Employee::Employee() {
        card = {};
        age = 0;
        wage = 0;
    }

    Employee::Employee(CompanyCard card, int age, double wage) {

        this->card = card;
        this->age = age;
        this->wage = wage;

    }

    Employee::Employee(int maxWage) {

        int firstNameIndex = rand() % firstNames.size();
        int lastNameIndex = rand() % lastNames.size();

        std::string firstName = firstNames[firstNameIndex];
        std::string lastName = lastNames[lastNameIndex];

        card.name = firstName + " " + lastName;
        card.idNum = rand() % 5000;

        age = rand() % 75;

        wage = rand() % maxWage;

    }

}