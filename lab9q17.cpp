/*
	
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr
*/


#include <iostream>

using namespace std;

////**********strdsp*********
void strdsp(char *str){
	for(int i = 0 ; i<strlen(str);i++){
		cout<<*(str+i);	
	}
	cout<<endl;
}

//**********strcpy*********
void strcpy(char *a,char *b){
	for (int i =0; i<strlen(a);i++){
		*(b+i)=*(a+i);	
	}
}

//**********strcat*********
void strcat(char *a,char *b, char *c){
	int i;	
	for (i =0; i<strlen(a)+strlen(b);i++){
		if(i<strlen(a))
			*(c+i)=*(a+i);
		else
			*(c+i)=*(b+i-strlen(a));
	}
	*(c+i)='\0';
}

//**********strcmp*********
bool strcmp(char *a,char*b){
	bool r= true; 	
	for (int i =0; i<strlen(a);i++){
		if(*(a+i)!=*(b+i)){
			r=false;
			break;		
		}	
	}
	return b;
}

//**********strlen*********
int strlen(char* str){
	int i =0;
	while(*(str+i)!='\0'){
		i++;	
	}
	return i;
}  


//**********strchr******
char* strchr(char *str, char c){
	int i = 0;
	while(*(str+i)!=c and i < strlen(str))
		i++;
	return str+i;
		
}

//**********strstr******
char* strstr(char *str, char *s){
	int i =0;
	int n1 = strlen(str);
	int n2 = strlen(s);
	while(i<n1){
		int j = 0;
		int k = i; 
		while(j<n2){
			if(*(str+k)==*(s+j)){
				k++;
			}
			j++;			
		}
		if(k-i==n2)
			break;
		i++;
	}
	return str+i;
}

int main(){
	//declare variables
	char a []="Hello";
	int n1 = strlen(a);
	char a[n1];
	//call functions to assign values
	strcpy(a,b);
	strdsp(a);
	strdsp(b);
	char c [n1+n1];
	strcat(a,b,c);
	strdsp(c);
	//call and display result
	cout << strcmp(a,b)<<endl;
	cout << strcmp(a,"hello")<<endl;
	cout << strlen(a)<<endl;
	cout << *strchr(b,'l')<<endl;
	cout << *strstr(a,"el")<<endl;
	

	return 0;
}
