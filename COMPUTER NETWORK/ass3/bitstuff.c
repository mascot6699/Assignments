#include <stdio.h>
#include <string.h>
main()
{
      char data[71];
      char td[101];
      char rd[101],buff[9];
      int i=0,j=0,k=0,ctr=0,ztr=0;
      int start=0;
      char flag[9]={'0','1','1','1','1','1','1','0'};
      do{
          printf("Enter data(max length = 70):");
          scanf("%s",data);
      }while(strlen(data)>70);
      //sender
      j=0;k=0;
      for(i=0;i<100;i++)
      {
          if(i<8)
          {
                 td[i]=flag[i];
          }
          else
          {
              if(j<70)
              {
                  if(ctr==5)
                  {
                      td[i]='0';
                      ctr=0;
                  }
                  else if(data[j]=='1')
                  {
                      ctr++;
                      td[i]=data[j];
                      j++;
                  }
                  else if(data[j]=='0')
                  {
                      ctr=0;
                      td[i]=data[j];
                      j++;
                  }
                  else if(data[j]=='\0')
                  {
                       j=100;
                       i--;
                  }
              }
              else
              {
                  if(k>7)
                      break;
                  td[i]=flag[k];
                      k++;
              }
          }
      }
      td[i]='\0';
      printf("Sender Data = %s\n",td);

	  ztr=0;
      //receiver
      for(i=0,k=0;i<100;i++)
      {
      	ctr=0;
      	for(j=0;j<8 && i<92;j++)
      	{
      		buff[j]=td[i+j];
      		if(buff[j]==flag[j])
      		{
      			ctr++;
      		}
      		else
      		{
      			ctr=0;
      			break;
      		}
      	}
      	if(ctr!=0)
      	{
      		i+=j-1;
      		if(start!=1)
      		{
      			start=1;
      		}
      		else
      		{
      			break;
      		}
      	}
      	else
      	{
      		if(ztr==5)
      		{
      			ztr=0;
      		}
      		else
      		{
      			rd[k]=td[i];
      			k++;
      		}
      		if(td[i]=='1')
      		{
      			ztr++;
      		}
      		else
      		{
      			ztr=0;
      		}

      	}

      }
      rd[k]='\0';
      printf("Reciever Data = %s",rd);
      scanf("%d");

}
