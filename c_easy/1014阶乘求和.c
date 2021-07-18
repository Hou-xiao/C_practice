/*
题目 1014: [编程入门]阶乘求和
时间限制: 1Sec 内存限制: 128MB 提交: 63829 解决: 15052
题目描述
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。

输入
n

输出
Sn的值

样例输入
5
样例输出
153 */

#include<stdio.h>

long int fact(unsigned int m){
    if (m==0){
        return 1;
    }else{
        return m * fact(m-1);
    }
}

int main(){
    unsigned int n;
    long int sum=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum += fact(i);
    }
    printf("%ld\n",sum);
    return 0;
}