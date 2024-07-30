// output:-

// parent class
// child class

#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
    cout << "parent class" << endl;
    }

}; // parent construncor will be called first

class child: public parent{
    public:
    child(){
    cout << "child class" << endl;
    }
}; // child class construncor will be called later

int main(){
    
    child c;

    return 0;
}

