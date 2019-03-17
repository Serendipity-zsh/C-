#include<stdio.h>
int main(){
	int m,n;
	int i,j,x;
	while(scanf("%d",&m)!=EOF){
		int a[m];
		int judge=0;
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&n);
		int b[n];
		for(j=0;j<n;j++){
			scanf("%d",&b[j]);
		}
		for(i=0;i<m;i++){
			if(i==0){
				printf("%d",a[i]);
			}
			
			else{
				printf(" %d",a[i]);
			}
			
		}
		printf("\n");
		for(i=0;i<n;i++){
			if(i==0){
				printf("%d",b[i]);
			}
			
			else{
				printf(" %d",b[i]);
			}
			
		}
		printf("\n");
		int sum[m+n];
		for(i=0;i<m;i++){
			sum[i]=a[i];
		}
		for(j=0;j<n;j++){
			judge=0;
			for(i=0;i<m;i++){
				if(b[j]==a[i]){
					judge=1;
				}
			}
			if(judge==1){
				for(x=0;x<m;x++){
					if(x==0){
						printf("%d",sum[x]);
					}
					
					else{
						printf(" %d",sum[x]);
					}
					
				}
				printf("\n");
			}
			else{
				sum[m]=b[j];
				m++;
				for(x=0;x<m;x++){
					if(x==0){
						printf("%d",sum[x]);
					}
					
					else{
						printf(" %d",sum[x]);
					}
					
				}
				printf("\n");
			}
		}
	}
}
