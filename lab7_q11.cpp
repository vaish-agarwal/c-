#include<iostream>
using namespace std;
int hcf(int x,int y){
	if (y == 0)return x;
	return hcf(y,x%y);
}

int main(){ 
int a,b;
cout<<"enter two numbers for which you want to calculate hcf "<<endl;
cin>>a>>b;
cout<<"HCF:"<<hcf(a,b)<<endl;
}
