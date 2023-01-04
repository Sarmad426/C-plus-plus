#include<iostream>
using namespace std;
int table(int num){
	int times;
		for(int i=1;i<=10;i++){
		times = num * i;
		cout<<num<<" * "<<i<<" = "<<times<<endl;
	}
	return 0;
}
int main(){
	int number;
	cout<<"Enter a number for Table: "<<endl;
	cin>>number;
	table(number);
}