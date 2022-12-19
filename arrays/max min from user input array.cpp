#include<iostream>
using namespace std;
int main(){
int n,max=0,min;
cout<<"Enter size of an array"<<endl;
cin>>n;
cout<<"Enter "<<n<<" elements for this array"<<endl;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
max=array[0];
min=array[0];
for(int i=0;i<n;i++){
    if(max<array[i]){
       max=array[i];}
       if(min>array[i]){
        min=array[i];
       }
}
cout<<"Maximum value is ="<<max<<endl;
cout<<"Minimum value is ="<<min<<endl;
}
