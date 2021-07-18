/*题目描述
输入两个正整数m和n，求其最大公约数和最小公倍数。
输入
两个整数
输出
最大公约数，最小公倍数
样例输入
5 7
样例输出
1 35*/

#include<stdio.h>

int gcd(int m, int n){
    if (m % n == 0)
        return n;
    else
        return gcd(n,m%n);
}//最大公约数辗转相除法
int lcm(int m, int n){
    return m*n/gcd(m,n);
}//最小公倍数=两数之积/最大公约数

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    printf("%d %d\n", gcd(m,n), lcm(m,n));
    return 0;
}