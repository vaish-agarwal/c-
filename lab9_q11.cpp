#include <iostream>
using namespace std;

/* Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables.
*/

int main(){
	int a;
	int *P1 =&a;
	cout<<"Size of Int: "<<sizeof(a)<<"   AND size of its pointer is:"<<sizeof(P1)<<endl;

	char b;
	char *P2=&b;
	cout<<"Size of Char:"<<sizeof(b)<<"   AND size of its pointer is:"<<sizeof(P2)<<endl;
	
	float c;
	float *P3=&c;
	cout<<"Size of Float:"<<sizeof(c)<<"   AND size of its pointer is:"<<sizeof(P3)<<endl;
	
	bool d;
	bool *P4=&d;
	cout<<"Size of Bool:"<<sizeof(d)<<"   AND size of its pointer is : "<<sizeof(P4)<<endl;
}

