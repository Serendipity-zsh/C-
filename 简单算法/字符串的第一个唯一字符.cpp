class Soulution{
	public:
		int result(string s)
		{
			int n=s.length();           //length()��string��ĳ�Ա�����������Ƿ����ַ����ĳ���(�ַ�����) 
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
					exit(0);         //exit(0)����������ʾ��ֹ���� 
				} 
			}
			return -1;
		}
};

int result(vector<char>s) 
{
	int n=s.size();                  //����size()������������s�Ĵ�С
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
				exit(0);         //exit(0)����������ʾ��ֹ���� 
			} 
	}
	return -1;
}

int result(char *s)
{
	int i,j,n;
	int count=0;
	n=strlen(s);          //strlen()���������ַ���s�ĳ��� 
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
			exit(0);      //exit(0)����������ʾ��ֹ����
		}
	}
	return -1;
}
int result(char *s)
{
	int i,j,n;
	int count=0;
	n=strlen(s);          //strlen()���������ַ���s�ĳ��� 
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
			exit(0);      //exit(0)����������ʾ��ֹ����
		}
	}
	return -1;
}
