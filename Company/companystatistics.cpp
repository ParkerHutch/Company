#include <iostream>
#include "employee.h"
#include "company.h"

int main() {

    business::Company company = business::Company(10, 500);
    company.printSummary();
    //std::cout << company.getPayroll();


}