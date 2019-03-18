class Solution{
	public:
		vector<vector<int> > result(vector<int>& nums)
		{
			int n=nums.size();
			int nj;
			int j3=6;
			int count=0;
			for(int i=1;i<=n;i++)
			{
				nj*=i;
			}
			vector<bool> p(n-2),q(n-2),r(n-2);
			vector<vector<int> > success;
			for(int i=0;i<n-2;i++)
			{
				for(int j=i+1;j<n-1;j++)
				{
					for(int k=j+1;k<n;k++)
					{
						if(nums[i]+nums[j]+nums[k]==0)
						{
							p(i)=true;
							q(j-i-1)=true;
							r(k-j-1)=true;
						}
					}
				}
			}
			for(int i=0;i<n-2;i++)
			{
				for(int j=i+1;j<n-1;j++)
				{
					for(int k=j+1;j<n;j++)
					{
						if(p(i)==true&&q(j-i-1==true)&&r(k-j-1)==true)
						{
							success[count]={nums[i],nums[j],nums[k]};
							count++;
						}
					}
				}
			}
			return success;
		}
}; 
