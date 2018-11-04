#include<iostream>
#include <stdio.h>
using namespace std;

/*
Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.
*/


int main(void)
{
char str[20], *p;

cout << "Input 10 characters of string"<<endl;
cin >> str;

// Pointer variable refers to address of string 
       p=&str[0];

// Show string by shifting top character of string to right
for(int b=10;b>=0;b--){
	for(int a=0;a<b;a++){
		cout<<*(p+a);
	}
cout<<endl;
}
return (0);
}
