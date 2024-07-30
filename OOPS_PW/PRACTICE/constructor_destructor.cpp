#include<iostream>
#include<string>
using namespace std;


class student{
    public:
    student(int roll_num_, string name_){
    roll_no = roll_num_;
    name = name_;       
    }

    student(){
    roll_no = 0;
    name = "ikp";       
    }

    student(student& s){
        roll_no = s.roll_no;
        name = s.name;  
    }

    ~student(){
        cout << "destructor is called" << endl;
    }

    int roll_no;
    string name;
    void print_data(){
        cout << roll_no << " : " << name << endl;
    }
};

int main(){

    student *s1 = new student();
    s1->print_data();
    delete s1;

    student *ss = new student();
    ss -> name = "khan pathan";
    ss -> roll_no = 10;

    ss -> print_data();

    student s2(13,"imroz");
    s2.print_data();

    student s3(14,"imroz");
    s3.print_data();

    student s4 = s3;
    s4.print_data();



    return 0;
}