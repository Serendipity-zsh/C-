#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
		vector<int> result(vector<int>& nums)
		{
			int n=nums.size();
			vector<int> output;
			for(int i=0;i<n;i++)
			{
				int sum=1;
				for(int j=0;j<n;j++)
				{
					if(j!=i)
					{
						sum*=nums[j];
					}
				}
				output[i]=sum;
			}
			return output;
		}
}; 
int main()
{
	Solution s;
	int a[4]={1,2,3,4};
	s.result(a);
	return 0;
}
