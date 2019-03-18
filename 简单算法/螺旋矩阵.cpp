class Solution{
	public:
		vector<int> result(vector<vector<int> >& matrix)
		{
			vector<int> nums;
			int m=matrix.size();
			int n=matrix[0].size();
			int count=0;
			do 
		    {
			    int j=0;
				bool judge=false;
				bool a=false;
			    bool b=false;
			    bool c=false;
			    bool d=false;
				for(int i=j;i<n-j;i++)
			    {
				    nums[count]=matrix[j][i];
				    count++;
				    a=true;
	            }
			   for(int i=j+1;i<m-j;i++)
			   {
				  nums[count]=matrix[i][n-j-1];
				  count++;
				  b=true;
			   }
			   for(int i=n-j-2;i>=j;i--)
			   {
				  nums[count]=matrix[m-j-1][i];
			  	  count++;
			  	  c=true;
			   }
			   	for(int i=m-j-2;i>=j+1;i--)
			    {
				    nums[count]=matrix[i][j];
				    count++;
				    d=true;
			    }
			    j++;
			    if(a&&b&&c&&d)
			    {
			    	judge=true;
				}
		    }while(judge);
		    return nums;
		}
};
