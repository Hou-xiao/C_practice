#include<stdio.h>
#include<string.h>

void exchange(char a[],char b[]){
    int i,j=0;
    for ( i = strlen(a)-1; i >= 0; i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
}

int main(){
    char a[100],b[100];
    gets(a);
    exchange(a,b);
    puts(b);
    return 0;
}