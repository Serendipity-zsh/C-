class Solution{
	public:
		void result(vector<vector<int>>& matrix)
		{
			int m=matrix.size();
			int n=matrix[0].size();
			int p,q;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(matrix[i][j]==0)
					{
						p=i;
						q=j;
					}
				}
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(i==p||j==q)
					{
						martix[i][j]=0;
					}
				}
			}
		}
}; 
