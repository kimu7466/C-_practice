// part of compile time polymorphism

#include<iostream>

using namespace std;

class sum{

    public: 

    void add(int x, int y){
        int sum = x+y;
        cout << sum << endl;
    }
    
    void add(int x, int y, int z){
        int sum = x+y+z;
        cout << sum << endl;
    }

    void add(float x, float y){
        float sum = x+y;
        cout << sum << endl;
    }
    
    void add(float x, float y, float z){
        float sum = x+y+z;
        cout << sum << endl;
    }

};


int main(){
    sum s;

    s.add(2,3);
    s.add(2,3,5);
    s.add(2.5f, 2.7);
    s.add(2.4f,3.4,4.5);

    return 0;
}



// output:-

//5
// 10
// 5.2
// 10.3