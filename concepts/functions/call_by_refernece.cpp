#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  cout << "inside function " << x << " & " << y << "\n";
  int z = x;
  x = y;
  y = z;
  cout << "inside function " << x << " & " << y << "\n";

}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout <<  "outside the function " << firstNum << " & " << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout <<  "outside the function " << firstNum << " & " << secondNum << "\n";

  return 0;
}
