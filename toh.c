#include<stdio.h>
#include<conio.h>
int toh(int num,char s,char t,char d)
{
if(num==1)
{
printf("\n the %d Disk  moved from %c --> %c",num,s,d);
return 0;
}
toh(num-1,s,d,t);
printf('\n the %d Disk  moved from %c --> %c",num,s,d);
tower(num-1,t,s,d);
}
int main()
{
int n;
char s='a',t='b',d='c';
clrscr();
printf("enter no of disk:");
scanf("%d",&n);
toh(n,s,t,d);
return 0;
}
