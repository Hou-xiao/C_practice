#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    double sum =0.0;
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    for (int i = 1; i <= b; i++)
    {
        sum += i*i;
    }
    for (int i = 1; i <= c; i++)
    {
        sum+=1.0/i;
    }
    printf("%.2f",sum);
    
    return 0;
}