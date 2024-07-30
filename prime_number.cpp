#include<iostream>
using namespace std;
/*

*/
int main(){
    int num ;
    int range = 300 ;
    int count = 0;
    for (num = 1 ; num <= range ; num++ ){
        int div = 2; 
        bool prime_number= true;
        while(div < num){
            if ( num % div == 0  ){
                prime_number = false;
                break; 
            }
            div++;
        }
        if (prime_number){
            cout << " \n*****************\n";
            cout << num << " is a prime number.\n";
            cout << " *****************\n\n";
            count++;
        }
        else{
            cout << num << " is not a prime number.\n";
        }
    }
    cout << "count of prime numbers between 1 to "<< num-1 << " is " << count ; 
    return 0;
}