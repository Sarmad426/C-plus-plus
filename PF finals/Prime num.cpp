#include<iostream>
using namespace std;
int main(){
	int number;
	bool prime=true;
	cout<<"Enter a number: "<<endl;
	cin>>number;
	for(int i=2;i<number/2;i++){
		if(number%i==0){
			prime = false;
			break;
		}
	}
	if(prime){
		cout<<"Prime number: "<<endl;
	}else{
		cout<<"Not a Prime number: "<<endl;
	}
}