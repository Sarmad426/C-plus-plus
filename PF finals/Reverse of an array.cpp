#include<iostream>
using namespace std;
int main(){
	int numbers[5]={5,4,3,2,1};
	cout<<"{ ";
	for(int i=5-1;i>=0;i--){
		cout<<numbers[i]<<", ";
	}
	cout<<"}"<<endl;
}