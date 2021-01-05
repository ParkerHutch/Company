#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "company.h"
#include "employee.h"

namespace business {

    Company::Company(std::string name, int numEmployees, int maxWage) {
        this->name = name;
        srand(time(0));
        generateEmployees(numEmployees, maxWage);

    }

    double Company::getPayroll() {

        double companyHourlyWage = 0;

        for (Employee employee : employees) {

            companyHourlyWage += employee.wage;

        }

        double yearlyPayroll = companyHourlyWage * 40 * 52;

        return yearlyPayroll;

    }

    void Company::generateEmployees(int numEmployees, int maxWage) {

        for (int i = 0; i < numEmployees; i++) {

            Employee newEmployee = Employee(maxWage);
            employees.push_back(newEmployee);

        }

    }

    void Company::printSummary() {

        std::cout << "Company \"" << name << "\" with " 
                    << employees.size() << " employees:\n";
        for (Employee employee : employees) {

            employee.printEmployeeInfo();

        }

        std::cout.precision(2);
        std::cout << std::fixed << "The yearly payroll total is $" << getPayroll();

    }

}

// Showcase different ways of creating employees
// void createEmployees() {

//     Employee joe;
//     joe.card = CompanyCard{"Joe", 1};
//     joe.age = 34;
//     joe.wage = 500;

//     Employee sally = Employee(CompanyCard{"Sally", 2}, 43, 600.0);

//     Employee randomEmployee = Employee(300);

//     joe.printEmployeeInfo();
//     sally.printEmployeeInfo();
//     randomEmployee.printEmployeeInfo();

//     //company = Company{std::vector<Employee>{joe,sally, randomEmployee}};

// }