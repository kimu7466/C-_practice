#include<iostream>
using namespace std;

void sum_func(int a, int b){
    
    cout <<"the sum of "<<a <<" and " <<b << " = "<< a+b;
    // cout << a+b;
}

int main()
{

    int x,y;

    cout<< "enter a number : ";
    cin >> x;
    cout<< "enter second number : ";
    cin >> y;
    
    sum_func(x,y);

    return 0;

}
