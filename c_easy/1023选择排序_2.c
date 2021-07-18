#include<stdio.h>
void order(int *a, int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int min,i,j,a[10],temp;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        min = i;
        for ( j = i+1; j < 10; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
        }
        order(&a[min],&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}