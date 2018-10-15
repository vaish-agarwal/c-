#include<iostream>

using namespace std;
int main()
{

int n;
cin>>n;
int arr[n],a;
int sum = 0;
for(a = 1; a<=n ; a++){
 cout<<a<<":";
 cin>>arr[a-1];
 cout<<endl;
 sum = sum + arr[a-1];
}
cout<<"sum:"<<sum<<endl;

for(int i = (n-1); i >0; i--){
for(a = 1; a<=n ; a++){
if((arr[a-1])>(arr[a])){
int temp = arr[a-1];
arr[a-1]= arr[a];
arr[a] = temp;
}
}
}

for(a = 1; a<=n ; a++){
cout<<arr[a-1]<<",";
}

}

