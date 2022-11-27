#include<iostream>
using namespace std;
int main(){
	char value;
	cout<<"Enter any English character: "<<endl;
	cin>>value;
	if(value=='a' || value=='e' || value=='i' || value=='o' || value=='u'){
		cout<<"You Entered an lowercase vowel: "<<endl;
	}
	else if(value=='A' || value=='E' || value=='I' || value=='O' || value=='U'){
		cout<<"You Entered an uppercase vowel: "<<endl;
	}else{
		cout<<"You Entered a Consonant: "<<endl;
	}
}
