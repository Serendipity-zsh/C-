class Solution{
	public:
		int result(int x)
		{
			vector<int> nums(10);
			int i=0;
			int sum=0;
			int temp;
			if(x>0)
			{
				temp=1;
			}
			else
			{
				temp=-1;
				x=x*(-1);
			}
			while(x)
			{
				nums[i]=x%10;
				x/=10;
				i++;
			}
			for(int j=0;j<i;j++)
			{
				sum+=nums[j]*pow(10,i-1-j);
			}
			sum*=temp;
			return sum;
		}
}; 
