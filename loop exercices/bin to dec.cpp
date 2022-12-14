#include <iostream>
#include <cmath>
using namespace std;
int main()
{	int binary, decimal = 0, rem = 0, counter = 0;
	cout << "Enter binary number: " << endl;
	cin >> binary;
	for(binary;binary>0;binary/=10){
		rem=binary%10;
		decimal=decimal + rem * pow(2,counter);
		counter++;
	}
	cout<<"Number in Decimal is: "<<decimal<<endl;
}

