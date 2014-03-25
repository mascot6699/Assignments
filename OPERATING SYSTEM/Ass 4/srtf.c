#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

static int mycc =0;
static int ccc =0;

int z;
struct queue
{
int pid;
int cpu_time,arrival_time;
struct queue *next;
}*start,*temp,*current,*running,*temp2;

void create(int a,int b,int c)
{
if(start==NULL)
{
start=(struct queue *)malloc(sizeof(struct queue));
start->pid=a;
start->cpu_time=b;
start->arrival_time=c;
start->next=NULL;
running=start;
}
else
{
temp=(struct queue *)malloc(sizeof(struct
 queue));
temp->pid=a;
temp->cpu_time=b;
temp->arrival_time=c;
running->next=temp;
temp->next=NULL;
running=temp;
}
return ;
}


int find_srtn(int a)
{
int x=0,y=0,z=0,i=999,j,k;
if(start==NULL)
{
printf("No Process Is There");
return 1;
}
else
{

temp=start;
while(temp->cpu_time==0 && temp!=running)
{
    temp=temp->next;
}
if(temp==running)
{

return 1;
}

temp=start;
x=temp->pid;
y=temp->cpu_time;
k=9999;
z=temp->arrival_time;
temp2=temp;

while(temp!=NULL)
{
if(z<=a
 && k>=temp->cpu_time && temp->cpu_time>=1)
{

temp2=temp;
k=temp->cpu_time;
i=0;
}
temp=temp->next;
if(temp!=NULL)
{
x=temp->pid;
y=temp->cpu_time;
z=temp->arrival_time;
}
}

if(i!=0)
{
printf("Wait ");
}
else
{
temp2->cpu_time=temp2->cpu_time-1;

if(mycc == temp2->pid)
{
printf("P%d ",temp2->pid);
ccc++;
}
else
{
printf("\n");
for(z=0;z<ccc;z++)
printf("   ");
printf("P%d ",temp2->pid);
ccc++;
}
mycc = temp2->pid;
}
return 0;
}
}

int main()
{
int a,b,c,d,e,i=0;
printf("How Many Process : ");
scanf("%d",&a);
for(b=0;b<a;b++)
{
scanf("%d %d %d",&c,&d,&e);
create(c,e,d);
}                                                                                                                                                                                   
create(10,5,500);
printf("\n Start \n ");

while(find_srtn(i)!=1 )
{i++; continue;}

for(z=0;z<ccc;z++)
printf("   ");
printf("\n Complete \n");
}



