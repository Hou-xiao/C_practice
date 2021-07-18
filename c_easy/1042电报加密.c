#include<stdio.h>
#include<string.h>
int main(){
    char a[128];
    gets(a);
    char *p = a;
    while (*p!='\0')
    {
        if (*p>='a'&&*p<='y')
        {
            *p+=1;
        }else if (*p=='z')
        {
            *p-=25;
        } 
        p++;
    }
    puts(a);
    return 0;
}