#include<iostream>
#include<string>

using namespace std;

class student {
    int a, b;
public:
    void getvalue(int x, int y); 
    void setvalue(int x, int y); 
};

void student::getvalue(int x, int y) { 
    a = x; 
    b = y;
    cout << "Sum: " << a + b << endl; 
}

void student::setvalue(int x, int y) { 
    a = x; 
    b = y;
}

int main() {
    student s;
    s.setvalue(5, 8);
    s.getvalue();
    return 0;
}
