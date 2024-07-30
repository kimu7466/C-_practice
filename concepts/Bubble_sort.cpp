#include<iostream>
using namespace std;

int main(){
    char array[] = {12,15,1,3,36,19};
    int n = sizeof(array)/ sizeof(array[0]);

    for (int i = 0 ; i<=n ; i++){
        for( int j = 0 ; j <= n-i-1 ; j++ ){
            if ( array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int i = 0 ; i <= n ; i++){
        cout << array[i] << endl ;
    }
    return 0;
}


