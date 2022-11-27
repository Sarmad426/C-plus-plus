#include<iostream>
using namespace std;
int main(){
	int guess_value=17,chances=3,user_input;
	for(int i=0;i<chances;i++){
		cout<<"Enter Guess value: "<<endl;
		cin>>user_input;
		if(user_input==guess_value){
			cout<<"You win: "<<endl;
			break;
		} if(i<2){
			cout<<"Try Again: "<<endl;
		}else{
			cout<<"You lose: "<<endl;
		}
	}
}
