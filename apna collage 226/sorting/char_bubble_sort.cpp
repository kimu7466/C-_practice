#include<iostream>
using namespace std;


void print_array(char array[], int length){
    for (int i = 0 ; i< length; i++){
        cout << array[i] << endl;
    }
}
void insertion_sort(char array[], int length){

    for ( int i = 0; i < length; i++ ){
        for ( int j = 0 ; j < length-i-1 ; j++ ){
            if (array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
            cout<< "******"<<endl;
            print_array(array,length);
            cout<< "######"<<endl;
    }
}

int main(){
    char array[] = {'g','h','i','j','a','b','d','c','f','e'};
    int length = sizeof(array)/sizeof(array[0]);

    insertion_sort(array, length) ;

    print_array(array,length);

    return 0; 
}