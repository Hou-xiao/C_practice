#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int flag=1;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag)
        {
            printf("%d\n",i);
        }
        flag=1;
        
    }
    
    return 0;
}