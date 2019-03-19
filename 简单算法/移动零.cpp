#include<iostream>
using namespace std;
int main()
{
	int nums[5]={0,1,0,3,12};
	int s[5]={0,0,0,0,0};
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(nums[i]!=0)
		{
			s[count]+=nums[i];
			count++;
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}
