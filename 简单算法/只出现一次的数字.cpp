class Solution {
public:
    int result(vector<int>& nums) {
        int n=nums.size();
			bool judge[n][n-1];
			//int count=0; 
			//int row=-1;
			int sum[n];
            for(int i=0;i<n;i++)
            {
                sum[i]=0;
            }
			for(int i=0;i<n;i++)
			{
                int list=-1;
				for(int j=0;j<n;j++)
				{
					if(i!=j)
                    {
                       list++;
					   if(nums[i]!=nums[j])
					   {
						   judge[i][list]=true;
					   }
                        else
                        {
                            judge[i][list]=false;
                        }
                    }  
				}
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-1;j++)
				{
					if(judge[i][j]==true)
					{
						sum[i]++;
					}
				}
			}
			for(int i=0;i<n;i++)
			{
				if(sum[i]==n-1)
				{
					return nums[i];
				}
				//else{return -1;}
			}
    }
};
