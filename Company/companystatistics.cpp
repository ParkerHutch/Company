#include <iostream>
#include "employee.h"
#include "company.h"
int main() {

    Employee joe;
    joe.card = CompanyCard{"Joe", 1};
    joe.age = 34;
    joe.wage = 500;

    // Uniform Initialization
    Employee sally = Employee{CompanyCard{"Sally", 2}, 43, 600};

    joe.printEmployeeInfo();
    sally.printEmployeeInfo();

    Company company = Company{std::vector<Employee>{joe,sally}};

    std::cout << company.getPayroll();


}