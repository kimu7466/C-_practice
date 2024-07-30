#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(const string& newName) {
        name = newName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int newAge) {
        if (newAge > 0) {  // simple validation
            age = newAge;
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

int main() {
    Person person;
    string name;
    int age;

    cout << "enter name : ";
    getline(cin, name);

    cout << "enter age : ";
    cin >> age;

    person.setName(name);
    person.setAge(age);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
