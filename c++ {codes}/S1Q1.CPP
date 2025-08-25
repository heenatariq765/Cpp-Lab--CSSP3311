#include <stdio.h>
int main()
{
int a=10;
int *p;     //pointer decleration
p=&a;   //p store address ofa
printf("the value of a is %d\n",a);
printf("address of a is %p\n",&a);
printf("value of p is %p\n",p);
printf("the value pointed by p is %d\n", *p);
return 0;
}