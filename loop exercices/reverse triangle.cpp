#include<iostream>
using namespace std;
int main(){
int i,j,number;
cout<<"Enter a number: "<<endl;
cin>>number;
for(i=0;i<number;i++){
    for(j=0;j<number;j++){
        if(j<i){
            cout<<" ";
        }else{
        cout<<"X";}
    }cout<<endl;
}
}
