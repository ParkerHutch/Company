// Header guard
#ifndef COMPANY 
#define COMPANY

#include <string>
#include <vector>
#include "employee.h"

namespace business {
    class Company {

        public:
            std::vector<Employee> employees;
            std::string name;
            
            Company(std::string name, int numEmployees, int maxWage);
            double getPayroll();
            void generateEmployees(int numEmployees, int maxWage);
            void printSummary();

    };
}

#endif