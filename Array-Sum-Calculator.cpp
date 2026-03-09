#include<iostream>
using namespace std;
int main()
{
	int  const size=15;
	int numbers[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int sum=0;
	
	
	for(int i=0; i<size; i++)
	{
		cout<<"enter value";
		cin>>numbers[i];
	}
	
	for(int i=0; i<size; i++)
	{
		cout<<numbers[i]<<",";
		
		sum=sum+numbers[i];
		
	}
	cout<<"the sum of given number is \t"<<sum<<endl;
}
