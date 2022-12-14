#include<iostream>
using namespace std;
int main(){
    int number, variable,sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    while(number!=0){
        variable=number%10;
        sum=sum*10+variable;
        number=number/10;
    }
    cout<<"Reverse of the number is "<<sum<<endl;
}
