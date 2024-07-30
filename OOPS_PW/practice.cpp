#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        int id;
        string name;
    student(){
        id = 0;
        name = "unknown";
    }

    student(int id_, string name_){
        id = id_;
        name = name_;
    }
    ~student(){
        cout << "destructor is called";
    }

    void print_info(){
        cout << id << " : " << name << endl;
    }

    void setter(int id_, string name_){
        id = id_;
        name = name = name_;
    }

    void getter(){
        cout << "id : " << id << endl << "name : " << name << endl;
    }
};

int main(){
    student s1;

    s1.id = 1;
    s1.name = "imroz khan";




    s1.print_info();

    s1.setter(4, "aadil khan");

    s1.print_info();

    student s2;
    s2.setter(10, "salman khan");
    s2.getter();


    return 0;
}