#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str[]="Hammad Rafique";
int length=strlen(str); //strlen is the built in function which can be used by including string.h in header.
for(int i=length-1;i>=0;i--){
    cout<<str[i];
}
}
