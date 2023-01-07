#include <iostream>
using namespace std;
int main() {
    int var1 = 0, var2 = 1, next=0, input;
    cout << "Enter a positive number: ";
    cin >> input;
    cout << "Fibonacci Series: " << var1 << ", " << var2 << ", ";
    next = var1 + var2;
    while(next <= input) {
        cout << next << ", ";
        var1 = var2;
        var2 = next;
        next = var1 + var2;
    }
}
