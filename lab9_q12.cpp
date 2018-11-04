#include<iostream>
using namespace std;

/*
Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this. 
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
Assign values a=2 and b = 3. Print the values of a, b and *p. 
Now point p to b. Print the values of a, b and *p.

*/

int main(){
	int a=2,b;
	int *p;
	p = &a;
	b=*p;
	
	cout<<"a ="<<a<<" b ="<<b<<" *p ="<<*p<<endl;
	b=3;
	p=&b;
	cout<<"a ="<<a<<" b ="<<b<<" *p ="<<*p<<endl;


}


