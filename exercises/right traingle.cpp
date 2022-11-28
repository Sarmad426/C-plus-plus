#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			for(int k=j;k<10;k++){
				cout<<"#";
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
