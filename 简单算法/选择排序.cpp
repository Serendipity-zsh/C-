#include<iostream>
using namespace std;
int main()
{
	        int nums[6]={1,5,9,7,4,6};
	        int n=6;
			int temp;
			for(int i=0;i<n-1;i++)
			{
				int most=i;
				for(int j=i+1;j<n;j++)
				{
					if(nums[j]>nums[most])
					{
						most=j;
					}
				}
				temp=nums[i];
				nums[i]=nums[most];
				nums[most]=temp;
			}
			for(int i=0;i<n;i++)
			{
				cout<<nums[i]<<" ";
			}
 } 
