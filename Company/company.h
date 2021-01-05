// Header guard
#ifndef COMPANY 
#define COMPANY

#include <vector>
#include "employee.h"

namespace business {
    class Company {

        public:
            std::vector<Employee> employees;
            Company(int numEmployees, int maxWage);
            double getPayroll();
            void generateEmployees(int numEmployees, int maxWage);
            void printSummary();

    };
}

#endif