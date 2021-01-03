#include <iostream>
using namespace std;

int getNumFromUser();
int sum(int num1, int num2);
int main() {

    int num1 = getNumFromUser();
    int num2 = getNumFromUser();

    cout << "Sum of the numbers you entered: " << sum(num1,num2) << "\n";

}

int getNumFromUser() {

    cout << "Please enter a number:";
    int x;
    cin >> x;
    cout << "You entered: " << x << "\n";
    return x;

}

int sum(int a, int b) {

    return a + b;

}