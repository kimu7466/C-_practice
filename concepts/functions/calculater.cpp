#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return static_cast<float>(a) / b;
    }
};

int main() {
    Calculator calc;
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    switch(op) {
        case '+':
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
