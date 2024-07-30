#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    string address;
};

int main(){
    Student p1;

    p1.id = 1;
    p1.name = "imroz";
    p1.address = "surat, 302, 12345978, uyvhja uahbcj.";

    cout  << endl;
    cout << p1.id << "\n";
    cout << p1.name << "\n";
    cout << p1.address << "\n";
        cout << "Indian Rupee symbol: \u20B9" << endl;

}



