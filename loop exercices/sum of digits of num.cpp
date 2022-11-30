#include<iostream>
using namespace std;
int main(){
	int num,rem,sum;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	cout<<"sum of digits is: "<<sum<<endl;
}
