// runtime polymorphism

#include<iostream>
using namespace std;

class parent{
    public:
    virtual void print(){                                // by making this virtual which function will be called will be decided at runtime.
        cout << "this is the parent class." << endl;
    }
    void show(){
        cout << "this is the parent class." << endl;
    }
};

class child: public parent{
    public:
    void print(){
        cout << "this is the child class." << endl;
    }
    void show(){
        cout << "this is the child class." << endl;
    }

};

int main(){
    parent *p;
    child c;

    p = &c;

    p->print();
    p->show();


    return 0;
}