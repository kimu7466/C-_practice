#include<iostream>
using namespace std;

int main(){
    int number ;
    number = 123456789;

    int reversed = 0;

    while ( number > 0 )
    {
        int last_digit = number % 10;
        reversed = reversed*10 + last_digit;
        // cout << number;
        number = number/10;
    }
    
    cout << reversed<< endl;

    return 0;
}