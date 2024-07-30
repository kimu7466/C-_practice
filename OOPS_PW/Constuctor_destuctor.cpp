#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(){        // default constructor -- no arguments passed 
        length = 0;
        breadth = 0;
    }

    Rectangle(int len, int bre){        // parameterized constructor --  arguments passed  
        length = len;
        breadth = bre;
    }


    Rectangle(Rectangle& r){        // copy constructor --  initialize an object by another existing object
        length = r.length;
        breadth = r.breadth;
    }

    ~Rectangle(){           // Destructor
        cout << "Destructor is called" << endl ;
    }
};


int main(){
    Rectangle* R4 = new Rectangle();
    cout << R4->length << R4->breadth << endl;
    delete R4; // Destructor is called

    // all the objects below are getting deleted or destroyed on return 0; 
    // But if you want to delete an object with delete keyword.
    // you can only use 'delete' key word on pointer variable as shown in example ABOVE.



    // default constructor
    Rectangle R1;               
    cout << R1.length<<endl;
    cout << R1.breadth<<endl;

    // parameterized constructor
    Rectangle R2(3,4);              
    cout << R2.length<<endl;
    cout << R2.breadth<<endl;

    // copy constructor
    Rectangle R3 =R2;            
    cout << R3.length<<endl;
    cout << R3.breadth<<endl;


    return 0; 
    // Destructor is called for R1
    // Destructor is called for R2
    // Destructor is called for R3
}