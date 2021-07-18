#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char b;
    b = a>=60?(a>=70?(a>=80?(a>=90?65:66):67):68):69;
    printf("%c\n",b);
    return 0;
}