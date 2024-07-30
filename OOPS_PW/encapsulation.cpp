#include<iostream>
using namespace std;

class class_name{
    int x;

    public:
    void set(int num){
        x = num;
    }

    int get(){
        return x;
    }
};

int main(){
    class_name object1;

    object1.set(3);
    cout << object1.get();


    return 0;
}
