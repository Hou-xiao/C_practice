/*题目描述
//有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数。
//写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
输入
输入数据的个数n n个整数 移动的位置m
输出
移动后的n个数
样例输入
10
1 2 3 4 5 6 7 8 9 10
2
样例输出
9 10 1 2 3 4 5 6 7 8 */
#include<stdio.h>
#include<malloc.h>
#define SWAP(a,b) (a^=b,b^=a,a^=b)
int main(){
    int *array,i,j,k,n,m;
    scanf("%d",&n);
    array = (int*)malloc(n*sizeof(int));
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&m);

    i=0;
    j=n-m;
    while (i<j)
    {
        for ( k = 0; k < m; k++)
        {
            SWAP(array[i],array[j]);
            i++;
            j++;
        }
        j=n-m;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}