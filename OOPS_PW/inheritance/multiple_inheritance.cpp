// output :- 

// parent1 class
// parent2 class
// child class

#include<iostream>
using namespace std;

class parent1{
    public:
    parent1(){                       // called fist
    cout << "parent1 class" << endl;
    }

};

class parent2{
    public:
    parent2(){                        // called second 
    cout << "parent2 class" << endl;
    }
};

class child: public parent1, public parent2{ // we can inherit as many classes as we want 
    public:
    child(){                   // called last
    cout << "child class" << endl;
    }
};

int main(){
    
    child c;

    return 0;
}
