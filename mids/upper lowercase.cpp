#include<iostream>
using namespace std;
int main(){
	char value;
	cout<<"Enter an english character: "<<endl;
	cin>>value;
	if(value>='a' && value<='z'){
		cout<<"Character is lowercase: "<<endl;
	}else if(value>='A' && value<='Z'){
		cout<<"Character is Uppercase: "<<endl;
	}else{
		cout<<"You Entered a special character: "<<endl;
	}
}
