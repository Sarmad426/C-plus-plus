#include <iostream>
using namespace std;
int main()
{
    int num1;
    bool prime=true;
    cout << "Input a number to check whether its a prime number or not: "<<endl;
	cin>> num1;	
    for (int a = 2; a <= num1/2; ++a) 
    {
        if (num1 % a == 0) 
        {
            prime=false;
        }
    }
    if (prime) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }
}
