#include<stdio.h>
void tohf(int ndisk,char source,char temp,char dest);
int main()
{
char source='a',temp='b',dest='c';
int ndisk;
printf("number of disc:");
scanf("%d",&ndisk);
printf("sequence is");
tohf(ndisk,source,temp,dest);
return 0;
}
void tohf(int ndisk,char source,char temp,char dest)
{
if(ndisk==1)
{
printf("move disk %d from %c-->%c\n",ndisk,source,dest);
return;
}
tohf(ndisk-1,source,dest,temp);
printf("move disk %d from %c-->%c\n",ndisk,source,dest);
tohf(ndisk-1,temp,source,dest);
}
