#include<iostream>
#include<string>

using namespace std;

class student{
    int roll;
    string name;

    public:
    void set(int x, string y){
        roll = x;
        name = y;
    }

    void get(){
        cout << "roll number : " << roll << endl ;
        cout << "name : " << name << endl ;
    }
};

int main(){
    student s1;

    s1.set(15, "imroz khan");

    s1.get();


    return 0;
}