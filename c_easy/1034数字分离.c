#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    int i;
    gets(a);
    for ( i = 0; i < strlen(a)-1; i++)
    {
        printf("%c ",a[i]);
    }
    printf("%c\n",a[i]);
    return 0;
}