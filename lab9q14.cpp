#include<iostream>
using namespace std;


int main(){
	// To-Do
	char name [] ="VAISHALIAGARWAL";
	for(int i =0; i<sizeof(name)/sizeof(name[0]);i++){
		cout<<name[i]<<"\t";	
	}
	cout << endl;
	for(int i =0; i<sizeof(name)/sizeof(name[0]);i++){
		cout<<*(name+i)<<"\t";	
	}
		
	
	return 0;
}

