#include<iostream>
using namespace std;

string concatenate(string fname, string lname){ // parameter
    return fname+" "+lname;
}

int main(){
    string x,y;

    cout<< "enter first name : ";
    cin >> x;
    cout<< "enter last name : ";
    cin >> y;

    cout << concatenate(x,y);// arguments

    return 0;
}