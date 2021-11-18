#include <iostream>
using namespace std;
int main()
{
	
	int a,b;
	cout<<"memasukkan nilai a : ";cin>>a;
	cout<<"memasukkan nilai b : ";cin>>b;
	if(a<b)
	{
		cout<<"b terbesar\n";
	}
	else if(a>b)
	{
		cout<<"a terbesar\n";
	}else
	cout<<"error";
	return 0;
}
