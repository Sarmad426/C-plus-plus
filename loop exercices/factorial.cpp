#include<iostream>
using namespace std;
int main(){
	int num,total=1;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	for(int i=num;i>0;i--){
		total*=i;
	}
	cout<<total<<endl;
}
