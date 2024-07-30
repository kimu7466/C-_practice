#include<iostream>
using namespace std;


void print_array(int array[], int length){
    for (int i = 0 ; i< length; i++){
        cout << array[i] << endl;
    }
}
void insertion_sort(int array[], int length){

    for ( int i = 0; i < length; i++ ){
        int min_index = i; 
        for ( int j = i+1 ; j < length ; j++ ){
            if (array[j]<array[min_index]){
                min_index = j;
            }
        }
        if (min_index != i){
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
            cout<< "******"<<endl;
            print_array(array,length);
            cout<< "######"<<endl;
    }
}

int main(){
    int array[] = {4,5,7,3,1,2,6};
    int length = sizeof(array)/sizeof(array[0]);

    insertion_sort(array, length) ;

    cout << ">>>>>>>>>>>>" << endl ;
    cout << "final sorted array" << endl ;
    print_array(array,length);

    return 0; 
}