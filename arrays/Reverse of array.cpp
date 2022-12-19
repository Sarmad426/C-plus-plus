#include<iostream>
using namespace std;
int main(){
	int array[8]={1,2,3,4,5,6,7,8};
	int length=sizeof(array)/sizeof(array[0]);
	for(int i=length-1;i>=0;i--){
		cout<<array[i]<<", ";
	}
}
