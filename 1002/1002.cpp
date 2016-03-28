#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	int n1,n2,i,j,a,k;
	float b,num1[1001],num2[1001],ans[1001];
	while(scanf("%d",&n1)!=EOF)
	{
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		memset(ans,0,sizeof(ans));
		for(i=0;i<n1;i++)
		{
			scanf("%d %f",&a,&b);
			num1[a]=b;
		}
		scanf("%d",&n2);
		for(i=0;i<n2;i++)
		{
			scanf("%d %f",&a,&b);
			num2[a]=b;
		}
		k=0;
		for(i=0;i<=1000;i++)
		{
			ans[i]=num1[i]+num2[i];
			if(ans[i]!=0)
				k++;
		}
		if(k==0)
			printf("%d\n",k);
		else
		{
			printf("%d ",k);
			for(i=1000;i>=0;i--)
			{
				if(k==1)
				{
					if(ans[i]!=0)
					{
						printf("%d %.1f\n",i,ans[i]);
						break;
					}
				}
				else
				{
					if(ans[i]!=0)
					{
						printf("%d %.1f ",i,ans[i]);
						k--;
					}
				}
			}
		}
	}
	return 0;
}