#include<iostream>
using namespace std;
int main(){
int i,j;
for(i=0;i<=6;i++){
    for(j=0;j<=9;j++){
        if(j>=6-i && j<=4+i){
            cout<<"X";}else{
                cout<<" ";
}
    }cout<<endl;
}
}
