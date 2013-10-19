#include<iostream>
#include<string.h>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
char flag[8],cmptoflag[8];
char data[100],senderdata[100];
      
cout << "\nenter the flag  :";
cin >> flag;

cout << "\nenter the data bits  :";
cin >> data;


int lenflag=strlen(flag);
int lendata=strlen(data);
int flag1=0,m=0,i=0;

char comp;

char lastbit=flag[lenflag-1];
if(lastbit=='1')
{
comp='0';
}
else
{
    comp='1';
}


for(i=0;i<=lendata-lenflag;i++)
{
     for(int j=i,k=0;j<=i+lenflag-1;j++,k++)
     {
             cmptoflag[k]=data[j];
     }
     
     if(strncmp(cmptoflag,flag,lenflag)==0)
     {                            int l;
                                 
                                  for(l=i;l<=i+lenflag-2;l++)
                                  {
                                          senderdata[m]=data[l];
                                          m++;
                                  }
                                  senderdata[m]=comp;
                                  m++;
                                  senderdata[m]=lastbit;
                                  m=m+1;
                                  i=i+lenflag-1;
                                                   
     }
     else
     {
        senderdata[m]=data[i];
        m++;
        
     }
         
} 

for(int g=i;g<=lendata-1;g++)
{
        senderdata[m]=data[g];
        m++;
}
senderdata[m]='\0';






int len=strlen(senderdata);

cout << "\n\n";
cout << "\n\n";
for(int a=0;a<=len-1;a++)
{
        cout << senderdata[a];
}

cout << "\n\n";
cout << flag << senderdata << flag;
getch();



     
}
