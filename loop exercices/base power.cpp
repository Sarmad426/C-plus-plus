#include<iostream>
using namespace std;
int main(){
	int base,power,result=1;
	cout<<"Enter base: "<<endl;
	cin>>base;
	cout<<"Enter power: "<<endl;
	cin>>power;
	for(int i=0;i<power;i++){
		result*=base;
	} 
	cout<<result<<endl;
}
