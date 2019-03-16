 #include<iostream>
 using namespace std;
 int main()
 {
 	int nums[4]={1,2,3,4};
	int output[4];
			for(int i=0;i<4;i++)
			{
				int sum=1;
				for(int j=0;j<4;j++)
				{
					if(j!=i)
					{
						sum*=nums[j];
					}
				}
				output[i]=sum;
			}
			for(int i=0;i<4;i++)
			{
				cout<<output[i]<<" ";
			}
 }
