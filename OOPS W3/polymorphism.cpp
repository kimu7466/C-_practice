#include<iostream>
using namespace std;

class Parent_class{
    
    int id;
    string name ;

    public:
    void set(int x, string y){
        id = x;
        name = y;
    }
    void get(){
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl; 
    }
    };


int main(){
    Parent_class p1;

    p1.set(5, "imroz khan");

    p1.get();

    return 0;
}



// #include <iostream>
// #include <string>

// class Person {
// private:
//     std::string name;
//     int age;

// public:
//     // Getter for name
//     std::string getName() const {
//         return name;
//     }

//     // Setter for name
//     void setName(const std::string& newName) {
//         name = newName;
//     }

//     // Getter for age
//     int getAge() const {
//         return age;
//     }

//     // Setter for age
//     void setAge(int newAge) {
//         if (newAge >= 0) {
//             age = newAge;
//         } else {
//             std::cerr << "Age cannot be negative." << std::endl;
//         }
//     }
// };

// int main() {
//     Person person;
//     person.setName("John");
//     person.setAge(30);

//     std::cout << "Name: " << person.getName() << std::endl;
//     std::cout << "Age: " << person.getAge() << std::endl;

//     return 0;
// }
