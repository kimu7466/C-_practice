// output :- 

// parent class
// child class
// grand child class

#include<iostream>
using namespace std;

class parent{
    public:
    parent(){                       // called fist
    cout << "parent class" << endl;
    }

};

class child: public parent{
    public:
    child(){                        // called second 
    cout << "child class" << endl;
    }
};

class grandchild: public child{
    public:
    grandchild(){                   // called last
    cout << "grand child class" << endl;
    }
};

int main(){
    
    grandchild c;

    return 0;
}
