class Soulution{
	public:
		int result(string s)
		{
			int n=s.length();           //length()是string类的成员函数，功能是返回字符串的长度(字符个数) 
			int count=0;
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(s[i]=s[j])
					{
						count++;
					}
				}
				if(count==0)
				{
					return i;
					exit(0);         //exit(0)函数正常表示终止程序 
				} 
			}
			return -1;
		}
};

int result(vector<char>s) 
{
	int n=s.size();                  //调用size()函数返回数组s的大小
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]=s[j])
			{
				count++;
			}
	    }
			if(count==0)
			{
				return i;
				exit(0);         //exit(0)函数正常表示终止程序 
			} 
	}
	return -1;
}

int result(char *s)
{
	int i,j,n;
	int count=0;
	n=strlen(s);          //strlen()函数返回字符串s的长度 
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]=s[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			return i;
			exit(0);      //exit(0)函数正常表示终止程序
		}
	}
	return -1;
}
int result(char *s)
{
	int i,j,n;
	int count=0;
	n=strlen(s);          //strlen()函数返回字符串s的长度 
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(s+i)=*(s+j))
			{
				count++;
			}
		}
		if(count==0)
		{
			return i;
			exit(0);      //exit(0)函数正常表示终止程序
		}
	}
	return -1;
}
