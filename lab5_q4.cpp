#include <iostream>
using namespace std;
int main()
{
	//declare the variables
	int a,b,c,d,e ;
	//enter marks in 5 subjects
	cout<<"Enter the marks in chemistry,physics,biology,maths and cs."<<endl;

	//store in variables
	cin>>a>>b>>c>>d>>e;

	//calculate percentage
	float f = ((a+b+c+d+e)/500.0)*100.0;


	//display it
	cout<<"You scored"<< f <<"%."<<endl;

		//calculate grade
		//display it 
		if(f>=90) 
		{
		cout<<"grade:A"<<endl;
		}
		else if(f>=80)
		{
		cout<<"grade:B"<<endl;
		}
		else if(f>=70)
		{
		cout<<"grade:C"<<endl;
		}
		else if(f>=60)
		{
		cout<<"grade:D"<<endl;
		}
		else if(f>=50)	
		{
		cout<<"grade:E"<<endl;
		}
		else
		{
		cout<<"grade:F"<<endl;
		}
		














}
