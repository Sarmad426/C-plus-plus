#include<iostream>
using namespace std;
int main(){
int length;
	cout<<"Enter length of this array: \n";
	cin>>length;
	cout<<"Enter "<<length<<" value for this array: \n";
	int array[length];
	for(int i=0;i<length;i++){
		cin>>array[i];
	}
	for(int i=0;i<length;i++){
		cout<<array[i]<<", ";
	}
}
