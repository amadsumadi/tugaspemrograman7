#include <iostream>
using namespace std;
int main ()
{
	int n,x;
	cout << "input banyak bilangan : ";
	cin >> n;
	int bil[n];
	for (int k=1;k<=n; k++)
	{
		cout << "input bilangan ke - " << k << " : ";
		cin >> bil[k];
	}
	for (int i=1;i<n;i++)
	{
		for (int j=i+1;j<=n;j++)
		{
			if (bil[i]>bil[j])
			{
				x=bil[i];
				bil[i]=bil[j];
				bil[j]=x;
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		cout << bil[i] << " ";
	}
}
