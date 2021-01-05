#include <iostream>
#include "employee.h"
#include "company.h"

int main() {

    // if the namespace name was really long, I could use a namespace alias,
    // namespace short = first::second;, and then short::function() later on
    business::Company company = business::Company("Apple", 10, 500);
    company.printSummary();
    //std::cout << company.getPayroll();


}