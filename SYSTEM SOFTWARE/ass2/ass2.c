#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<string>

int main()
{
int i=0,j=0, start, locctr;
char *A[] = {"ADD","ADDR","SUB","SUBR","MUL","MULR","DIV","DIVR","LDA","LDB","LDX","LDCH","STA","STB","STX","STCH","JSUB","RSUB","JEQ","START","END"};
//for(i=0;i<20;i++)
//puts(A[i]);

char *B[10];
char a[10],b[10],c[10];

FILE *input1, *outdat, *symtabdat;
input1=fopen("input.txt","r");
outdat = fopen("out.dat","w");
symtabdat = fopen("symtab.dat","w");


fscanf(input1,"%s%s%s",a,b,c);

if(strcmp(b,"START")==0)
{
start = atoi(c);
locctr = start;
fprintf(outdat,"\t %s %s %s\n",a,b,c);
}
else
locctr=0;

fscanf(input1,"%s%s%s",a,b,c);


i=0;
while(strcmp(b,"END")!=0)
{


if(strcmp(a,"**")!=0)
fprintf(symtabdat,"%s\t%d\n",a,locctr);


fprintf(outdat,"%d",locctr);
j=0;

while(strcmp(A[j],"END")!=0)
{
if(strcmp(b,A[j])==0)
{locctr+=3;
break;
strcpy(B[i],A[j]);
i++;
}
j++;
}


if(strcmp(b,"WORD")==0) locctr+=3;
else if(strcmp(b,"RESW")==0) locctr+=(3*(atoi(c)));
else if(strcmp(b,"RESB")==0) locctr+=(atoi(c));
else if(strcmp(b,"BYTE")==0) locctr++;

fprintf(outdat," %s %s %s\n",a,b,c);

fscanf(input1,"%s%s%s",a,b,c);
}

fprintf(outdat,"%d %s %s %s\n",locctr,a,b,c);




int len=locctr-start;
printf("\nThe length of the program is %d.\n\n",len);

fclose(input1);

getch();
 return 0;
}
