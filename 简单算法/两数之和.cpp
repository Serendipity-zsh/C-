#include<iostream>
using namespace std;
int main()
{
    int num[4];
    int target;
    int x;
    int y;
    for(int i=0;i<4;i++)
    {
    	cin>>num[i];
	}
	cin>>target;
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(num[i]+num[j]==target)
           {
               x=i;
               y=j;
           }
        } 
    }
    cout<<"["<<x<<","<<y<<"]"<<endl;
    return 0;
}
