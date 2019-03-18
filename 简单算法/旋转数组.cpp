#include<iostream>
using namespace std;
int main()
{
	int nums[5]={1,2,3,4,5};
	int rotate[5];
	int k=2;
	int count=-1;
	for(int i=5-k;i<5;i++)
	{
		count++;
		rotate[count]=nums[i];
	}
	for(int i=0;i<5-k;i++)
	{
		count++;
		rotate[count]=nums[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<rotate[i]<<" ";
	}
	return 0;
}
