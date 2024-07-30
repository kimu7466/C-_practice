#include<iostream>
using namespace std;

int main(){
    int num;

    num = 5;

    for(int i = num; i>= 1; i--){
        for(int j = 1; j<= i; j++){
            cout<< j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}




// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1