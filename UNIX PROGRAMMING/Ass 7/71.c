
// run like ./a.out root umang co315

#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <stddef.h>
#include <string.h>
#include <grp.h>

int grid,i;


int main(int argc, char * argv[]){


for(i=1;i<argc;i++)
{
struct passwd *p;
setpwent();
while ((p = getpwent()) != NULL)
if (strcmp(argv[i], p->pw_name) == 0)
{
printf("for user %s\n Description is %s\n user id is %d\n group id is %d\n " ,p->pw_name, p->pw_gecos, p->pw_uid,p->pw_gid);

grid = p->pw_gid;
}

setgrent();
struct group * ptr1;
while ((ptr1 = getgrent())!=NULL)
if (grid == ptr1->gr_gid)
{
printf("other people within group are %s\n",ptr1->gr_name);
}


setpwent();
struct passwd * ptr;
while ((ptr = getpwent())!=NULL)
if (grid == ptr->pw_gid)
{
printf("%s\n",ptr->pw_name);
}
}
return 0;
}
