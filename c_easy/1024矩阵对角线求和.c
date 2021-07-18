#include<stdio.h>
int main(){
    int a[3][3];
    int i, j;
    int m=0,n=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
            if (i==j)
            {
                m+=a[i][j];
            }
            if (i+j==2)
            {
                n+=a[i][j];
            }
        }
    }
    printf("%d %d\n",m,n);
    return 0;
}
