#include<iostream>
using namespace std;

int main(){
    int num = 5;

    for(int i=1; i<=num; i++){
        for(int j=1 ; j<=num-i ; j++){
            cout<< "_";
        }
        for(int j=1 ; j<=i ; j++){
            cout<< j <<" ";
        }
        cout<<"\n";
    }
}