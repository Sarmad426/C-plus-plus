#include<iostream>
using namespace std;
int main(){
	// A Pointer is a variable that stores the memory location of a particular variable.
	// It is simply just the memory address.
	string name="Sarmad";
	int age=18;
	double gpa=3.5;
	string *p_name=&name;
	int *p_age= &age;
	double *p_gpa=&gpa;
	cout<<name<<" : "<<p_name<<endl;
	cout<<age<<" :"<<p_age<<endl;
	cout<<gpa<<" :"<<p_gpa<<endl;
}