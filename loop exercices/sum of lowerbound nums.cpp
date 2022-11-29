#include<iostream>
using namespace std;
int main(){
// A program that takes user input and display the sum of all the lowerbound numbers:
int input,result;
cout<<"Enter a number: "<<endl;
cin>>input;
int counter=input;
while(counter>0){
result+=counter;
counter--;
}
cout<<result<<endl;
}
