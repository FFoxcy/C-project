#include <iostream>
using namespace std;

// Function 1: Pass by Value
void Value(int &x, int &y) {
    x = x ^ y;   // mix the values of x and y,use XOR and store in x
    y = x ^ y;   // extract the original value of x, store it in y
    x = x ^ y;   // extract the original value of y, store it in x
    cout << "Before Pass By Value : x = " << x << ", y = " << y << endl;
}

// Function 2: Pass by Reference
void Reference(int x, int y) {
    x = x ^ y;   // mix the values of x and y,use XOR and store in x
    y = x ^ y;   //extract the original value of x, store it in y
    x = x ^ y;   //extract the original value of y, store it in x
    cout << "Before Pass By Reference : x = " << x << ", y = " << y << endl;
}

int main() {
    int x = 15, y = 20;

    // Call Function 1 Pass by Value
    Value(x, y);
    cout << "After Pass By Value: x = " << x << ", y = " << y << endl;

    // Call Function 2 Pass by Reference
    Reference(x, y);
    cout << "After Pass By Reference: x = " << x << ", y = " << y << endl;

    return 0;
}

