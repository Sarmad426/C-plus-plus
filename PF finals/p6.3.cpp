#include<iostream>
using namespace std;
int main(){
	// A Program that Displays the sum of all the lowerbound numbers:
	int number,sum;
	cout<<"Enter a number: "<<endl;
	cin>>number;
	for(int i=number;i>0;i--){
		sum+=i;
	}
	cout<<sum;
}
