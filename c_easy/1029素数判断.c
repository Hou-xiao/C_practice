/*题目描述
写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
输入
一个数
输出
如果是素数输出prime 如果不是输出not prime
样例输入
97
样例输出
prime*/

#include<stdio.h>
void isPrime(int n){
    int flag=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
    }
    if (flag)
    {
        printf("prime\n");
    }else{
        printf("not prime\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}