#include<iostream>
#include<string>
using namespace std;


class student{
    public:
    int roll_no;
    string name;
    void print_data(){
        cout << roll_no << " : " << name << endl;
    }
};

int main(){
    student s;
    int roll_no;
    string name;

    cout << "enter roll number : ";
    cin >> s.roll_no;
    cin.ignore(); 

    cout << "enter name : ";
    getline(cin, s.name) ;

    s.print_data();

    return 0;
}


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// #include<iostream>
// #include<string>
// using namespace std;


// class student{
//     public:
//     int roll_no;
//     string name;
//     void print_data(){
//         cout << roll_no << " : " << name << endl;
//     }
// };

// int main(){
//     // student s;
//     int roll_no;
//     string name;

//     cout << "enter roll number : ";
//     cin >> roll_no;
//     cin.ignore(); 

//     cout << "enter name : ";
//     getline(cin, name) ;

//     cout << roll_no << " : " << name << endl;
    


//     // s.roll_no = roll_no;
//     // s.name = name;

//     // s.print_data();

//     return 0;
// }