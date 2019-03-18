#include<iostream>
using namespace std;
void mySwap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
	int nums[6]={3,2,1,5,6,4};
	int i=5;
	while(i>0)
	{
		int exchange=0;
		for(int j=0;j<i;j++)
		{
			if(nums[j+1]>nums[j])
			{
				mySwap(nums[j],nums[j+1]);
				exchange=j;
			}
		}
		i=exchange;
	}
	for(int x=0;x<6;x++)
		{
			cout<<nums[x]<<" ";
		}
	return 0;
}
