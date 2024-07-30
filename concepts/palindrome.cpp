#include<iostream>
using namespace std;

int main(){
    int num = 5;
    // cout<<"enter a number : ";
    // cin>>num;
    for(int i=1; i<=num ; i++){
        for(int j=1 ; j <= num-i ; j++){
            cout<< "  ";
        }
        int k=i;
        for(int j = 1; j<=i; j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=2 ; j<= i ; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=1; i<=num-1 ; i++){
        for(int j=1 ; j <= i ; j++){
            cout<< "  ";
        }
        int k=num-i;
        for(int j = 1; j<=num-i; j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=2 ; j<=num-i ; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
//         1 
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
//   4 3 2 1 2 3 4
//     3 2 1 2 3
//       2 1 2
//         1

    // for(int i=1; i<= num ; i++){
    //     int j;
    //     for(j=1 ; j<=num-i ; j++){
    //         cout<< " ";
    //     }
    //     int k = i;
    //     for(   ; j<=num ; j++){
    //         cout<<k--;
    //     }
    //     k=2;
    //     for(  ; j<= num+i-1; j++){
    //         cout<<k++;
    //     }
    //     cout<<endl;
    // }

}