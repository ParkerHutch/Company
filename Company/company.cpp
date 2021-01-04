#include "company.h"
#include "employee.h"

double Company::getPayroll() {

    double companyHourlyWage = 0;

    for (Employee employee : employees) {

        companyHourlyWage += employee.wage;

    }

    double yearlyPayroll = companyHourlyWage * 40 * 52;
    
    return yearlyPayroll;

}