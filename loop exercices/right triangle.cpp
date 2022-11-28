#include<iostream>
using namespace std;
int main(){
    int a=6;
    for(int i=0;i<=6;++i){
        for(int j=a;j>0;j--){
        cout<<"#";
        }
        cout<<endl;
        a--;
    }
}
