// #include<iostream>
// using namespace std;


// class student{
//     public:
//     string name;
//     int age;
//     bool gender;

//     void printInfo(){
//         cout << "name = "<<name<<endl;
//         cout << "age = "<<age<<endl;
//         cout << "gender = "<<gender<<endl;
//     }
// };


// int main(){
//     student a;
//     a.name = "imroz";
//     a.age = 25;
//     a.gender = 1;

//     a.printInfo();

// }


#include<iostream>
using namespace std;


class student{
    string name;
    public:
    int age;
    bool gender;
     
    void setname(string s){
        name =s;
    }

    void printInfo(){
        cout << "name = "<<name<<endl;
        cout << "age = "<<age<<endl;
        cout << "gender = "<<gender<<endl;
    }
};


int main(){
    student a;
    string s = "imroz";
    a.setname(s);
    a.age = 25;
    a.gender = 1;

    a.printInfo();

}