// output :- 

// grand parent class       // grand child class got two times of grandparent properties 
// parent1 class
// child1 class
// grand parent class
// parent2 class
// child2 class
// grandchild class



#include<iostream>
using namespace std;

class grandparent{                  
    public:
    grandparent(){
    cout << "grand parent class" << endl;
    }
};

class parent1: public grandparent{                         
    public:
    parent1(){                       
    cout << "parent1 class" << endl;
    }

};

class parent2: public grandparent{            
    public:
    parent2(){                        
    cout << "parent2 class" << endl;
    }
};

class child1: public parent1{            
    public:
    child1(){                        
    cout << "child1 class" << endl;
    }
};

class child2: public parent2{
    public:
    child2(){                  
    cout << "child2 class" << endl;
    }
};

class grandchild: public child1, public child2{
    public:
    grandchild(){                  
    cout << "grandchild class" << endl;
    }
};



int main(){
    grandchild c1;



    return 0;
}
