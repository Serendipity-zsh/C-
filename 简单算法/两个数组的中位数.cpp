#include<iostream>
using namespace std;
int main()
{
	int nums1[4]={1,2,4,5};
            int nums2[4]={4,5,6,9};
            double se=0;
			int n=4;
			int m=4;
			int temp;
			int nums3[m+n];
			for(int i=0;i<m+n;i++)
			{
				if(i<m)
				{
					nums3[i]=nums1[i];
				}
				else
				{
					nums3[i]=nums2[i-m];
				}
			}
			for(int i=0;i<m+n-1;i++)
			{
				for(int j=i+1;j<m+n;j++)
				{
					if(nums3[i]>nums3[j])
					{
						temp=nums3[i];
						nums3[i]=nums3[j];
						nums3[j]=temp;
					}
				}
			}
			if((m+n)%2==0)
			{
				se=(double)(nums3[(m+n)/2]+nums3[(m+n)/2]-1)/2;
			}
			else
			{
				se=(double)(nums3[(m+n)/2]);
			}
			cout<<se<<endl;
			return 0;
}
            
