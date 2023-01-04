#include<iostream>
using namespace std;
int main(){
	int array1[4]={4,3,5,2};
	int array2[4]={5,7,6,4};
	int sum_array[4];
	cout<<"{ ";
	for(int i=0;i<4;i++){
		sum_array[i]=array1[i]+array2[i];
		cout<<sum_array[i]<<", ";
	}
	cout<<"}"<<" is the Sum of both arrays via index: "<<endl;
	
}