#include<iostream>
using namespace std;

//changing the input to upper case
char toUpper(char a){
char b;
if(a >= 97 && a<=122){
b = (a-32);
}
else{
b = a;
}
return b;
}
	
	//changing the input to lower case
	char toLower(char a){
	char b;
	if(a >=65 && a <= 90){
	b =(a+32);
	}
	else{
	b = a;
	}
	return b;
	}


		
		int main(){
		char x;
		//asking user for input 
		cout<<"enter a character to convert its case"<<endl;
		cin>>x;
		
		//calling toUpper function
		if(x >= 97 && x<=122){
		cout<<"result:"<<toUpper(x)<<endl;
		}
		else if(x >=65 && x <= 90){
		
		//calling toLower function
		cout<<"result:"<<toLower(x)<<endl;
		}
		else{
		cout<<"enter required data properly"<<endl;
		}

		}
