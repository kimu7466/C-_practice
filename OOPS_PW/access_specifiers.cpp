#include<iostream>
using namespace std;

class parent{
    public: // can be used anywhere in main code or derived classed etc.
    int x;

    private: // can be used in this class and and derived classes only.
    int y ;

    protected: // only accessible for its own class
    int z;
    
};

class child: public parent{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class child2: private parent{
    // x will become private here
    // y will become private here
    // z will not be accessible
};


class child3: protected parent{
    // x will become protected here
    // y will become protected here
    // z will not be accessible
};



int main(){
    parent p1;

    p1.x = 1;
    // y will not be accessible
    // z will not be accessible

    return 0;
}