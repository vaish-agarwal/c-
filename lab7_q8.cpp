#include<iostream>
using namespace std;

//write a function to display the sum of all digits present in  a no.
int sum(int n)
{
	if(n)
	return (n%10)+sum(n/10);
	//write  a condition to stop the recursion.	
	else
	return 0;
}

 int main(){
//declare variables
int n;
//ask user for an input and store it in a varible.
cout<<"enter a no. for which you want the sum of its digits."<<endl;
cin>>n;
//display the result.
cout<<sum(n);

}
