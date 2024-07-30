#include<iostream>
using namespace std;

class Fruits{
    public:             // access specifier
    string name;        // datatypes
    string color;

};

int main(){

    Fruits apple;       // creating object of type fruit

    apple.name = "Apple";
    apple.color = "Red";

    cout << apple.name <<" - "<< apple.color << endl;

    // creating object using "new" keyword >> here we will get a pointer variable to our object which is mango
    // we will access properties with arrow operator (  ->  ) , instead of using dot operator (  .  ), example below
    Fruits *mango = new Fruits();  
    mango->name = "Mango";
    mango->color= "Yellow";

    cout << mango->name << " - " << mango->color << endl;

    return 0;
}








// class student{
//     string name;
//     int rollnum;
// };