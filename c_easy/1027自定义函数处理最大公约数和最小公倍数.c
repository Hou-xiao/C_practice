/*题目描述
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。
输入
两个数
输出
最大公约数 最小公倍数
样例输入
6 15
样例输出
3 30*/

#include<stdio.h>

int gcd(int a, int b){
    if (a % b == 0)
        return b;
    else
        return gcd(b,a%b);
}   //辗转相除

int lcm(int a, int b){
    return a*b/gcd(a,b);
}   //最小公倍数=两数之积/最大公约数

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d",gcd(a,b),lcm(a,b));
    return 0;
}