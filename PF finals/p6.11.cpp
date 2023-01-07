#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// Armstrong number: A number whose digits cude be equivlant to the number itself: 
	// Example: 371 --> 3*3*3 + 7*7*7 + 1*1*1 = 371
	int input,sum,times,temp,temp2,j;
	cout<<"Enter a number: "<<endl;
	cin>>input;
	temp2=input;
	for(int i=input;i>0;i/=10){
		temp=temp2%10;
		sum=temp;
		temp2/=10;
		times += pow(sum,3); 
	}
	if(times==input){
		cout<<"Armstrong number: "<<endl;
	}else{
		cout<<"Not an Armstrong number: "<<endl;
	}
}
