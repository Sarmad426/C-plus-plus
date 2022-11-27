#include<iostream>
using namespace std;
int main(){
	int a=1,b=6,c=a;
	start:
		cout<<a<<" ";
		a++;
		if(a<b)
		goto start;
		cout<<endl;
		a=++c;
		b++;
		if(b!=11){
			goto start;
		}
}
