/*题目描述
已有一个已正序排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
输入
第一行，原始数列。 第二行，需要插入的数字。
输出
排序后的数列
样例输入
1 7 8 17 23 24 59 62 101
50
样例输出*/
#include<stdio.h>
int main(){
    int a[10],number;
    int i,j;
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    number=a[9];
    for ( i = 0; i < 9; i++)
    {
        if (a[i]>number)
        {
            j=i;
            break;
        }
    }
    for ( i = 9; i > j ; i--)
    {
        int t = a[i-1];
        a[i-1]=a[i];
        a[i]=t;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}