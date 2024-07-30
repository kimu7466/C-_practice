#include<iostream>
using namespace std;

int multi(int x,int y){
    return  x*y ;
}

int main(){
        int x,y;

    cout<< "enter a number : ";
    cin >> x;
    cout<< "enter second number : ";
    cin >> y;
    int result = multi(x,y);
    
    cout << "the result is " <<result;
}