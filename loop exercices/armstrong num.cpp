#include<bits/stdc++.h>
using namespace std;
int main(){
	// Armstrong is a number which is equal to the cube of its digits. For Example 371 
	int number,rem,sum;
	cout<<"Enter a number: "<<endl;
	cin>>number;
	int n=number;
	while(n!=0){
		rem = n % 10;
		sum = sum + (rem * rem * rem );
		n/=10;
	}
	if(sum==number){
		cout<<"Armstrong number: "<<endl;
	}else{
		cout<<"Number is not Armstrong: "<<endl;
	}
}
