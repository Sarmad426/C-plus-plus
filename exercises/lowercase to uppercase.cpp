#include<iostream>
using namespace std;
int main(){
	char character;
	cout<<"Enter Any Character:(Uppercase or Lowercase) "<<endl;
	cin>>character;
	int convert_int=int(character);
	if(character>='A' && character<='Z'){
	convert_int+=32;	
	cout<<char(convert_int)<<" in Lowercase: ";
	}
	else if (character>='a' && character<='z'){
		convert_int-=32;
		cout<<char(convert_int)<<" in Uppercase";
	}
	else{
		cout<<"Invalid input: "<<character<< " is not an alphabetic character: ";
	}
}