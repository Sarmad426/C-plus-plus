#include<iostream>
using namespace std;
int main(){
int i,j;
for(i=0;i<=6;i++){
    for(j=0;j<=5;j++){
        if(j>=i){
                if(i%2==0){
            cout<<"X";
            }else{
            cout<<"#";}
        }else{
        cout<<" ";}
    }cout<<endl;
}
}
