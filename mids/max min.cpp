#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: " << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "Number 1 is greatest: " << endl;
            if (num2 > num3)
            {
                cout << "Number 2 is second greatest: " << endl;
                cout << "Number 3 is smallest: " << endl;
            }
            else if (num3 > num2)
            {
                cout << "Number 3 is second greatest: " << endl;
                cout << "Number 2 is smallest: " << endl;
            }
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num1)
        {
            cout << "Number 2 is greatest: " << endl;
            if (num1 > num3)
            {
                cout << "Number 1 is second greatest: " << endl;
                cout << "Number 2 is smallest: " << endl;
            }
            else if (num3 > num2)
            {
                cout << "Number 3 is second greatest: " << endl;
                cout << "Number 2 is smallest: " << endl;
            }
        }
    }
    else if (num3 > num1)
    {
        if (num3 > num1)
        {
            cout << "Number 3 is greatest: " << endl;
            if (num2 > num1)
            {
                cout << "Number 2 is second greatest: " << endl;
                cout << "Number 1 is smallest: " << endl;
            }
            else if (num1 > num2)
            {
                cout << "Number 1 is second greatest: " << endl;
                cout << "Number 2 is smallest: " << endl;
            }
        }
    }
}