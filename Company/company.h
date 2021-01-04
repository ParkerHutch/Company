#ifndef COMPANY
#define COMPANY

#include <vector>
#include "employee.h"


class Company {

    public:
        std::vector<Employee> employees;
        double getPayroll();
        void generateEmployees(int numEmployees);

};

#endif