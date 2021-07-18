#include<stdio.h>
#include<string.h>
void strlink(char* a, char* b, char* c);
int main(){
    char a[128],b[128],c[256];
    gets(a);
    gets(b);
    strlink(a,b,c);
    puts(c);
    return 0;
}

void strlink(char* a, char* b, char* c){
    char* s=c;
    for (int i = 0; i < strlen(a); i++)
    {
        *s++ = a[i];
    }
    for (int i = 0; i < strlen(b); i++)
    {
        *s++ = b[i];
    }
    *s++ = '\0';
}