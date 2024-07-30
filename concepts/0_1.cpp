// #include<iostream>
// using namespace std;

// int main(){
//     int num =5;

//     cout<<"enter a number : ";
//     cin>>num;

//     for(int i = 1; i<=num ; i++){
//         for(int j = 1 ; j<=i  ; j++){
//             if(i%2 != 0){
//                 if(j%2 != 0){
//                     cout<< "1" << " ";
//                 }
//                 else{
//                     cout<< "0" << " ";
//                 }
//             }
//             else{
//                 if(j%2 == 0){
//                     cout<< "1" << " ";
//                 }
//                 else{
//                     cout<< "0" << " ";
//                 }
//             }
//         }

//         cout<<"\n";
//     }


//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
    int num = 5;

    for(int i = 1; i<=num ; i++){
        for(int j = 1 ; j<=i;  j++){
            if (  (i+j)%2 == 0){
                cout<<"1 ";
            }
            else{
                cout<< "0 ";
            }
        }
        cout<<"\n"; 
    }

}