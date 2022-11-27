#include<iostream>
using namespace std;
int main(){
	 char str[100];
    int counter = 0;
    cout << " Input a string: ";
    cin >> str;
    for (int i = 0; str[i] != 0; i++) {
        counter++;
    }
    cout << "Length of the string: "<<counter << endl;
}
