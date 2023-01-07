#include<iostream>
using namespace std;
int main(){
	int input,sum,temp;
	// A Program that prints the sum of digits of a number: 
	cout<<"Enter a number: "<<endl;
	cin>>input;
	for(int i=input;i>0;i/=10){
		temp=input%10;
		sum+=temp;
		input/=10;
	}
	cout<<sum;
}
