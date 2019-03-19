#include<iostream>
using namespace std;
int main()
{
	bool a[2];
	a[0]=true;
	int count=0;
	for(int i=0;i<2;i++)
	{
		if(a[i])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
