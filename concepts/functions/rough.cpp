#include <iostream>
using namespace std;
class calculator{
    public:
    int sum(int a, int b){
        return a+b;
    }
    int sub(int a, int b){
        return a-b ;
    }
    int mul(int a, int b){
        return a*b ;
    }
    float div(int a, int b){
        if (b==0){
            cout << "zerodivision error";
            return 0;
        }
        return static_cast<float>(a)/b ;
    }
    float mod(int a, int b){
        return a%b ;
    }
};

int main() {
    calculator calc;
    char ope;
    int a, b;

    cout << "enter first number : ";
    cin >> a;
    cout << "enter operator : ";
    cin >> ope;
    cout << "enter second number : ";
    cin >> b;

    switch(ope){
        case '+':
        cout << "summation is : " << calc.sum(a,b) << endl;
        break;
        case '-':
        cout << "subtraction is : " << calc.sub(a,b) << endl;
        break;
        case '*':
        cout << "multiplication is : " << calc.mul(a,b) << endl;
        break;
        case '/':
        cout << "division is : " << calc.div(a,b) << endl;
        break;
        case '%':
        cout << "modulo is : " << calc.mod(a,b) << endl;
        break;
        default:
        cout << "Invalid operator";
    }
    return 0;
}
