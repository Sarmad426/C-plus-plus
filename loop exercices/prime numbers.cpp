#include<iostream>
using namespace std;
int main(){
    int number,point;
    cout<<"Enter a number"<<endl;
    cin>>number;
    for(point=2;point<number;point++){
        if(number%point==0){
            cout<<"Number is not prime"<<endl;
        break;
		}
		}
    if(point==number){
        cout<<"Number is prime"<<endl;
            }
}
