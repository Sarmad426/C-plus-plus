#include<iostream>
using namespace std;
int main(){
int i,j,n=5,count;
count=n*2-1;
for(i=1;i<=count;i++){
	for(j=1;j<=count;j++){
		if(j==i || j==count-i+1){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}
	cout<<endl;
}
}