#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
       
        case '-':
            cout << "Result: " << num1 - num2;
            break;
      
            cout << "Invalid operator!";
    }

    return 0;
}
 