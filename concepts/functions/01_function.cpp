#include<iostream>
using namespace std;

void my_function(string name){
    cout << "my name is "<<name <<",and i am learning c++.";
}

int main(){
    string name;
    getline(cin,name) ;
    my_function(name);
    return 0;
}