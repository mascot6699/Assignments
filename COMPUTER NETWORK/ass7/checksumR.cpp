#include<stdio.h>
#include<conio.h>

int main()
{
 int a[5],sum=0,i;
 
 for (i=0;i<5;i++)
 {
     printf("enter the %d number ",i);
     scanf("%X",&a[i]);
     }  
     for (i=0;i<5;i++)
     sum = sum + a[i];
     
     printf("%X\n",sum);
     
     
     int temp1 = 0, temp2=0;
     temp1 = (sum)>>16;
     temp2 = temp1 << 16;
     sum = sum - temp2;
     printf("sum without msb added is %X\n",sum);
     sum = sum + temp1;
     
     printf("NON INVERTED SYNDROME is %X\n", sum);
     
     sum = 0xffff - sum;
     
     printf("SYNDROME is %X\n", sum);
     
     if(sum != 0x0000)
     {printf("error is there");
     }
     else
     printf("error free transmisson yay!!");
     getch();
return 0;
    
}
