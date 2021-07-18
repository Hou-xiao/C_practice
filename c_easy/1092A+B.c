#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int sum=0;
        int n1;
        scanf("%d",&n1);
        while (n1--)
        {
            int temp;
            scanf("%d",&temp);
            sum+=temp;
        }
        printf("%d\n\n",sum);
    }
    
    return 0;
}