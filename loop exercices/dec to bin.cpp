#include<iostream>
using namespace std;
int main(){
	int decimal,binary=0, rem=0,product=1;
	cout<<"Enter a decimal number for conversion: "<<endl;
	cin>>decimal;
	for(decimal;decimal>0;decimal/=2){
		rem=decimal%2;
		binary=binary + (rem*product);
		product*=10;
	}
	cout<<"Number in binary is: "<<binary<<endl;
}
