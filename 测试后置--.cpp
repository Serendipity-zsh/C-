#include<iostream>
using namespace std;
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
    int j=2;
    cout<<a[j--]<<endl;
    cout<<a[j];
	return 0;
}
