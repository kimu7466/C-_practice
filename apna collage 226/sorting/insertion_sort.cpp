#include<iostream>
using namespace std;


void print_array(int array[], int length){
    for (int i = 0 ; i< length; i++){
        cout << array[i] << endl;
    }
}
void insertion_sort(int array[], int length){

    for ( int i = 1; i < length; i++ ){
        int insertion_index = i; 
        int j = i-1;
        int current_value = array[i];

        for ( j ; j >= 0 && (array[j]>current_value); j-- ){
            array[j+1] = array[j];
            insertion_index = j;
        }
        array[insertion_index] = current_value;

            cout<< "******"<<endl;
            print_array(array,length);
            cout<< "######"<<endl;
    }
}

int main(){
    int array[] = {4,5,7,3,1,2,6};
    int length = sizeof(array)/sizeof(array[0]);

    insertion_sort(array, length) ;

    // cout << ">>>>>>>>>>>>" << endl ;
    // cout << "final sorted array" << endl ;
    // print_array(array,length);

    return 0; 
}



