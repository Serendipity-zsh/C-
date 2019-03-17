#include<iostream>
#include<vector> 
using namespace std; 
class Solution {
public:
    int removeDuplicates(int *nums) {
    
        //if(nums.empty())return 0;
        int i=0;
        int n=sizeof(nums)/4;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
            else
                continue;
        }
        return i+1;
    }
}; 
int main()
{
	Solution s;
	int size=4;
	int *nums=new int [size];
	for(int i=0;i<size;i++)
	{
		cin>>nums[i];
	}
	cout<<s.removeDuplicates(nums)<<endl;
	for(int i=0;i<s.removeDuplicates(nums);i++)
	{
		cout<<nums[i]<<endl;
	}
	return 0;
}
