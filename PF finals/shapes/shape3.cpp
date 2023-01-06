#include<iostream>
using namespace std;
int main(){
	// Hollow Square
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			if(i==0 || j==0 || j==5 || i==5){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

