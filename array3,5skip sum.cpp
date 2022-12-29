#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	
	for(int i=0;i<10;i++){
	cout<<"Enter "<<i+1<<" value:";
		cin>>a[i];}
	
	
	int j=0;
	for(int i=0;i<10;i++){
		if(i==3)
		continue;
		else if(i==5)
		continue;
		j=j+a[i];
}
cout<<"The sum of arry is:"<<endl;
	cout<<j<<endl;
cout<<"-----------------------"<<endl;
for(int i=9;i>=0;i--){
	cout<<a[i]<<"   ";
}
}
