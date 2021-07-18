/*题目描述
用选择法对10个整数从小到大排序。
输入
输入10个无序的数字
输出
排序好的10个整数
样例输入
4 85  3 234 45 345 345 122 30 12
样例输出
3
4
12
30
45
85
122
234
345
345*/
#include<stdio.h>
int main(){
    int number[10];
    int i,j,temp;
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&number[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 10-i; j++)
        {
            if (number[j]>number[j+1])
            {
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }   
        }   
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",number[i]);
    }
    return 0;
}