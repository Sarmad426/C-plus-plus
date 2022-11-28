#include<iostream>
using namespace std;
int main(){
int i,j;
for(i=0;i<=6;i++){
    for(j=1;j<=9;j++){
        if(j<=10-i && j>=i){
            cout<<"*";
        }else{
        cout<<" ";}
    }cout<<"\n";
}
}
