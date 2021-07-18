/*题目描述
写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
输入
一个3x3的矩阵
输出
无
样例输入
1 2 3
4 5 6
7 8 9
样例输出
1 4 7 
2 5 8 
3 6 9 */

#include<stdio.h>
void transform(int a[3][3]){
    // int t;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (i!=j)
    //         {
    //             t=a[j][i];
    //             a[j][i]=a[i][j];
    //             a[i][j]=t;
    //         }
    //     }
    // }
    for (int i = 0; i < 3; i++)
    {    for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int array[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    transform(array);

    return 0;
}