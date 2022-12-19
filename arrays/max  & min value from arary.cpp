#include<iostream>
using namespace std;
int main(){
	int array[8]={11,3,62,74,24,63,16,7};
	int max=array[0],min=array[0];
	for(int i=0;i<8;i++){
	if(array[i]>max){
		max=array[i];
	}
	if(array[i]<min){
		min=array[i];
	}
	}
	cout<<min<<" is the minimum number from this array: "<<endl;
	cout<<max<<" is the maximum number from this array: "<<endl;
}
