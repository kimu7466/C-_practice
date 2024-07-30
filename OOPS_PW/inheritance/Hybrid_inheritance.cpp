// output :- 

// grand parent class
// parent class
// child1 class
// grand parent class
// parent class
// child2 class

#include<iostream>
using namespace std;

class grandparent{                  
    public:
    grandparent(){
    cout << "grand parent class" << endl;
    }
};

class parent: public grandparent{                           // single inheritance
    public:
    parent(){                       
    cout << "parent class" << endl;
    }

};

class child1: public parent{            // hierarchical inheritance
    public:
    child1(){                        
    cout << "child1 class" << endl;
    }
};

class child2: public parent{
    public:
    child2(){                  
    cout << "child2 class" << endl;
    }
};

int main(){
    
    child1 c1;
    child2 c2;

    return 0;
}
