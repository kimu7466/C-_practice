// output :- 

// parent class
// child1 class
// parent class
// child2 class

#include<iostream>
using namespace std;

class parent{
    public:
    parent(){                       // called fist
    cout << "parent class" << endl;
    }

};

class child1: public parent{
    public:
    child1(){                        // after parent 
    cout << "child1 class" << endl;
    }
};

class child2: public parent{
    public:
    child2(){                   // after parent it will again call parent
    cout << "child2 class" << endl;
    }
};

int main(){
    
    child1 c1;
    child2 c2;

    return 0;
}
