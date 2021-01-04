#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>

// Structs are good for data-only structures 
// They're allowed to have functions, but this is not recommended
struct CompanyCard {
    std::string name;
    short idNum;
};

class Employee {
    public:
        CompanyCard card;
        int age;
        double wage;
        void printEmployeeInfo();
};

#endif