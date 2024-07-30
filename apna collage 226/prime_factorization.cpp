#include<iostream>

using namespace std;

void prime_in_range(int range){
    // cout<< range<<endl;

    for( int i=0 ; i <= range ; i++ ){

        bool is_prime = true;

        for ( int j = i-1 ; j>=2 ; j-- ){

            if (i%j == 0){
                is_prime = false;
                break;
            }

            else{
                is_prime = true;
            }
        }
        if (is_prime){
            cout << i << " : is a prime number" << endl; 
        }
    }
}


int main(){
    int range;

    cout << "enter a range to print prime numbers : ";
    cin >> range ;

    prime_in_range(range);

    return 0;
}