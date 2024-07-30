#include<iostream>
#include<math.h>

using namespace std;

void armstrong_or_not(int number){
    bool go = true;
    int digit;
    int cube;
    int sum =0;
    int check_number = number;
    while (number>0){
        digit = number%10;
        // cout << digit << endl;    
        number = number/10;
        // if (number==0){
        //     go = false;
        // }
        cube = digit*digit*digit;
        // cout << "digit" << " : " << digit << " cube "<< ": "<<cube<<endl;
        sum += cube;
    }
    if ( check_number == sum ){
        cout <<"\t"<< check_number << " number is a armstrong number."<< endl<<endl;;
    }

}


int main(){
    int number;

    cout << "enter a number to check if it is a armstrong number or not : ";
    cin >> number ;

    armstrong_or_not(number);

    return 0;
}