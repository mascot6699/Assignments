//write a c program for left factor in grammer
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>

using namespace std;

int i,n,j,maxm,k,k1;
char a[10][10],b[10][10],my[10],my1[10],my2[10];

int main()
{

scanf("%d",&n);
printf("write the commands in next %d lines\n", n);
for (i = 0 ; i<n ;i++)
{
cin>>a[i];
cin>>b[i];
printf("%s -> %s\n",a[i],b[i]);
}

printf("The changed production rules are\n");

for (i = 0 ; i<n ;i++)
for (j = i+1 ; j<n ;j++)
{
if(strcmp(a[i],a[j])==0)
{
		if(strlen(b[j]) >= strlen(b[i]) )maxm = strlen(b[j]);
	else
	maxm = strlen(b[i]);

for(k=0;k<maxm;k++)
{
	if(b[j][k]==b[i][k])
		my[k]=b[j][k];
	else
	{
	
    int ss= 0;
		for(k1=k;k1<maxm;k1++)
		{
		my1[ss]=b[i][k1];
		my2[ss]=b[j][k1];
		ss++;
		}
		break;
	}

}
if(strlen(my)!=0)
printf("so new production will be\n%s -> %s%s'\n%s' -> %s\n%s' -> %s\n",a[i],my,a[i],a[i],my1,a[i],my2);
}

}
return 0;
}
