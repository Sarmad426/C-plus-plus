#include<iostream>
using namespace std;
int square_func(int num1){
	return num1*num1;
}
int cube_func(int num2){
	return num2*num2*num2;
}
int main(){
	int num1,num2,square,cube,sum;
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	cout<<"Enter second number: "<<endl;
	cin>>num2;
	sum=square_func(num1) + cube_func(num2);
	cout<<sum<<endl;
}
