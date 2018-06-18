#include <stdio.h>
void f(int a)
{
	switch(a)
	{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;	
	}
}
int main()
{
	char a[101];
	scanf("%s",a);
	int sum=0,i=0;
	while(a[i]!='\0')
	{
		
		sum+=a[i]-'0';
		++i;
	}
	int b[11],j=0;
	if(sum==0)
	{
		f(0);
		return 0;
	}
	while(sum!=0)
	{
		b[j]=sum%10;
		sum/=10;
		++j;
	}
	for(j-=1;j>0;--j)
	{
		f(b[j]);
		printf(" ");
	}
	f(b[0]);
	return 0;
}

