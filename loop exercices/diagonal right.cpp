#include<iostream>
using namespace std;
int main(){
	int num=5;
	for(int i=0;i<=5;i++){
		for(int j=1;j<=num;j++){
			if(j%num==0){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		num--;
		cout<<endl;
	}
}