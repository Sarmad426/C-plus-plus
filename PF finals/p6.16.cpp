#include <iostream>
using namespace std;
int main() {
	// Fibonacci Series
    int num1 = 0, num2 = 1, next_num = 0 , input;
    cout << "Enter a positive number: "<<endl;
    cin >> input;
    while(next_num <= input) {
        cout << next_num << ", ";
       	num1 = num2;
       	num2 = next_num;
        next_num = num1 + num2;
    }
}
