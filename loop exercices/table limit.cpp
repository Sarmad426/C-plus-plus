#include<iostream>
using namespace std;
int main(){
int table,limit;
cout<<"Enter number for table: "<<endl;
cin>>table;
cout<<"Enter Limit: "<<endl;
cin>>limit;
for(int i=1;i<=limit;i++){
cout<<table<<" * "<<i<<" = "<<table*i<<endl;
}
}
