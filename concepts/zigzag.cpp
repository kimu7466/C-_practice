#include<iostream>
using namespace std;

int main(){
    int num =9;

    cin>>num;

    for (int i=1; i<=3 ;i++){
        for(int j=1 ; j<=num ; j++){
            if ( (i+j)%4 == 0 ){
                cout<< "* ";

            }
            else if( i==2 && j%4 ==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";

            }
        }

        cout<<"\n";
    }
}


// A 
// B B 
// C C C 
// D D D D 
// E E E E E 