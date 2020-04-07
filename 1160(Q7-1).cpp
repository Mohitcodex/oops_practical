#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"enter two number ";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		
		throw b;
		cout<<"result="<<a/b;
	}
	
	catch(int m)
	{
		cout<<"input number is not valid = "<<m;
	}
}


