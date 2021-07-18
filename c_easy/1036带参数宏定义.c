#include<stdio.h>
#define EXCHANGE(a,b) {int t=a;a=b;b=t;}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    EXCHANGE(a,b);
    printf("%d %d\n",a,b);
    return 0;
}