#include <iostream>
#include <cmath>
#include <vector>


std::vector<double> getSideLengths();
double heron(std::vector<double> sideLengths);

int main() {

    std::cout << "[--Heron's Formula--]\n";

    std::vector<double> sideLengths = getSideLengths();

    double area = heron(sideLengths);

    std::cout << "The area of a triangle with side lengths " 
                << sideLengths[0] << ", " << sideLengths[1] << ", and " 
                << sideLengths[2] << " is " << area;
    
}

std::vector<double> getSideLengths() {

    std::vector<double> triangleSides = {0, 0, 0};
    for (int i = 0; i < 3; i++) {

        std::cout << "Enter side length " << i+1 << ": ";
        double val;
        std::cin >> val;
        triangleSides[i] = val;

    }

    return triangleSides;

}

// Heron's formula
double heron(std::vector<double> sideLengths) {

    double s = (sideLengths[0] + sideLengths[1] + sideLengths[2]) / 2;

    double area = sqrt(
        s 
        * (s-sideLengths[0]) * (s-sideLengths[1]) * (s-sideLengths[2]));
    
    return area;

}

