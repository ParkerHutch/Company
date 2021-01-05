#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>

namespace business {
    
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

            Employee();
            Employee(CompanyCard card, int age, double wage);
            Employee(int maxWage);
            void printEmployeeInfo();
    };

}

#endif