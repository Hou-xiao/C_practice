/*题目描述
用迭代法求 平方根
公式：求a的平方根的迭代公式为： X[n+1]=(X[n]+a/X[n])/2 
要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数
输入
X
输出
X的平方根
样例输入
4
样例输出
2.000
*/
#include<stdio.h>
#include<math.h>
int main(){
    double a;
    scanf("%lf",&a);
    double x1=0.0,x2=a/2.0;
    do
    {
        x1 = x2;
        x2 = (x1+a/x1)/2.0;
    } while (fabs(x2-x1)>1e-5);
    printf("%.3lf\n",x2);
    return 0;
}