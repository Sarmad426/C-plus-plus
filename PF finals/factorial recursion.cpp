#include<iostream>
using namespace std;
int factorial(int n){
	if (n==0){
		return 1;
	}
	int times = n * factorial(n-1);
	return times;
}
int main(){
	int number;
	cout<<"Enter a number: "<<endl;
	cin>>number;
	cout<<factorial(number);
}
