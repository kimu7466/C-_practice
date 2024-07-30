#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(int y){
        x = y;
    }

    friend void print(A &obj);
};

void print(A &obj){
    cout << obj.x << endl;
}

int main(){
    A obj(5);
    // cout << obj.x << endl ;
    print(obj);
    return 0;
}




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.

// #include<iostream>
// using namespace std;

// class A {
//     int x;
// public:
//     A(int y) : x(y) {}  // Using initializer list

//     // Friend function declaration
//     friend void print(A &obj);
// };

// // Friend function definition
// void print(A &obj) {
//     cout << obj.x << endl;
// }

// int main() {
//     A obj(5);
//     // cout << obj.x << endl ;  // This line is correctly commented out
//     print(obj);  // Correctly prints the value of x
//     return 0;
// }
