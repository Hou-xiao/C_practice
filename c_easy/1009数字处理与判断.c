/*
题目描述
给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
输入
一个不大于5位的数字
输出
三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
样例输入
12345
样例输出
5
1 2 3 4 5
54321
*/

#include<stdio.h>
int main(){
    int n,count=0;
    int number[5];
    scanf("%d",&n);

    for (int i = 0; i < 5; i++)
    {
        if (n==0)
        {
            break;  //n=0结束循环
        }else{
            number[i] = n % 10;
            n/=10;
            count++;
            //将n倒序存入数组，count储存位数
        }
    }
    printf("%d\n",count);

    for (int j = count-1; j >=0 ; j--)
    {
        printf("%d ",number[j]);
        //倒叙打印数组，即为正序打印n
    }
    printf("\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d",number[i]);
        //正序打印数组即为倒叙打印n
    }
    
    return 0;
}