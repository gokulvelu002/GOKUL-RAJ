#include<stdio.h>
int main(void)
{
int a;
scanf("%d",&a);
if(a==!0)
{
if(a>0)
{
printf("positive");
}
if(a<0)
{
printf("negative");
}
else
{
printf("zero");
}
return 0;
}
