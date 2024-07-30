
#include<iostream>
using namespace std;


class Testing{
    int a, b;

    public:
    void setvalue(int a, int b);
    int getvalue();

};

void Testing::setvalue(int a , int b)
{
    this->a = a;
    this->b = b;
}

int Testing::getvalue()
{
    return a+b;
}


int main(){
Testing object;
object.setvalue(5,8);
cout << object.getvalue();
return 0;

}