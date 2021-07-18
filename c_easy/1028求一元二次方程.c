/*题目描述
求方程 的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。从主函数输入a、b、c的值。
输入
a b c
输出
x1=? x2=?
样例输入
4 1 1
样例输出
x1=-0.125+0.484i x2=-0.125-0.484i*/

#include<stdio.h>
#include<math.h>
void root(double a, double b, double c);

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    root(a,b,c);
    return 0;
}

void root(double a, double b, double c){
    double delta = b*b-4*a*c;
    if (delta>=0)
    {
        printf("x1=%.3lf x2=%.3lf\n",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a);    //Δ>=0有两实数根或两相等实根
    }else{
        printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi",-b/(2*a),sqrt(-delta)/(2*a),-b/(2*a),sqrt(-delta)/(2*a));  //Δ<0则两根为共轭复数
    }
}