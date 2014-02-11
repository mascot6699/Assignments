#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>

int i=0,a,f;
int main()
{

  char s[30];

  FILE* input = NULL;
  input = fopen("input1.txt","a+");

	FILE * id = fopen("identifier.txt","w+");
	FILE * in = fopen("integer.txt","w+");
	FILE * fl = fopen("float.txt","w+");
  do
  {

  //printf("%s  ",s);

  if(s[0]=='_'|| isalpha(s[0]))
  {
  f=3;
  for(i=1;i<strlen(s);i++)
  {
  if (!( isalpha(s[i])|| isdigit(s[i]) || s[i] == '_' ))
  { printf("%s is invalid\n",s);
  f=0;}
  }
   if(f==3) fprintf(id,"%s\n",s);
  }

  else
  if(isdigit(s[0]))
  {
       f =3;
        for(i=1;i<strlen(s);i++)
        {


            if (!(isdigit(s[i])))
            {
            if (s[i] =='.') f = 0; else f=1;
            }
        }
       if(f==3) fprintf(in,"%s\n",s);
       else if(f==1)  printf("%s is invalid\n",s);
       else if(f==0) fprintf(fl,"%s\n",s);

  }
   else
   if (!( isdigit(s[0])|| isalpha(s[0])) )
   printf("%s is invalid\n",s);

}while(fscanf(input,"%s",s)!= -1 );

getch();
 return 0;
}
