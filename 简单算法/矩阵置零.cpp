class Solution{
	
};
		void result(vector<vector<int> >& matrix)
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
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(i==p||j==q)
					{
						matrix[i][j]=0;
					}
				}
			}
		}
		int main()
		{
			int p,q;
			int matrix[3][3];
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>matrix[i][j];
				}
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					if(matrix[i][j]==0)
					{
						p=i;
						q=j;
					}
				}
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					if(i==p||j==q)
					{
						matrix[i][j]=0;
					}
				}
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<matrix[i][j];
				}
				cout<<endl;
			}
			return 0;
		}
