#include<iostream>
using namespace std;
bool result(int n) {

    int sum1;
	if(n<=0||n<=4&&n>1)
	{
		return false;
	}
	while(n!=1)
	{
	  while(n)
	  {
		int sum=0;
		sum+=(n%10)*(n%10);
		n=n/10;
		sum1=sum;
	  }
	  n=sum1;
	  if(n==4)
	  {
		return false;
	  }
    }
	return true;
}
		int main()
		{
			cout<<result(19)<<endl;
		}
