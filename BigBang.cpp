#include<stdio.h>
#include<string.h>
struct BigBang
{
    char name[30][30];
    int last;
} BigBang;

//ʵ�ֲ��빦��
void Insert(int a,char b[30])
{
    int i;
    BigBang.last++;
    for(i=BigBang.last;i>a;i--)
    {
      strcpy(BigBang.name[i],BigBang.name[i-1]);
    }
    strcpy(BigBang.name[a],b);
}

//ʵ��ɾ������
void Delete(int a)
{
    int i;
    for(i=a;i<BigBang.last;i++)
    { 
      strcpy(BigBang.name[i],BigBang.name[i+1]);
    } 
    BigBang.last--;
}

//���Ҳ���������λ�� 
int Search(char b[30])
{
    int a=-1;
    int i;
    for(i=0;i<=BigBang.last;i++)
    {
        if(strcmp(BigBang.name[i],b)==0)
        {
            a=i;
            break;
        }
    }
    return a;
}
//ʵ��������� 
void show(){
	int i;
    for(i=0;i<=BigBang.last;i++)
    {
    	printf("%s ",BigBang.name[i]);
	}
    printf("\n");
}
int main()
{
    BigBang.last=-1;
    char st[30];
    while(scanf("%s",st)!=EOF)
    {
        if(st[0]=='i'&&st[1])    //���������ַ���������ĸ����ǰ������ĸ���ж��ǲ���(i)��ɾ��(d)������(se)�����(sh) 
        {
            int a;
            char b[30];
            scanf("%d",&a);
            scanf("%s",b);
            Insert(a-1,b);
        }
        else if(st[0]=='s'&&st[1]=='e')
        {
            char b[30];
            scanf("%s",b);
            printf("%d\n",Search(b)+1);
        }
        else if(st[0]=='d')
        {
            char b[30];
            scanf("%s",b);
            int a=Search(b);
            Delete(a);
        }
        else if(st[0]=='s'&&st[1]=='h')
        {
          show();
        }
    }
    return 0;
}
