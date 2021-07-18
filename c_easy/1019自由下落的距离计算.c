/*题目描述
一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
输入
M N
输出
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
样例输入
1000 5
样例输出
31.25 2875.00
*/

#include<stdio.h>
int main(){
    double m;   //初始高度
    int n;      //次数
    scanf("%lf %d", &m, &n);
    double high= m, distance=0.0;   //high每次反弹高度，distance共经过的距离
    for (int i = 0; i < n; i++)
    {
        distance+=high;     //下落记一次
        high/=2;            //反弹高度减半
        distance+=high;     //反弹加一次
    }
    distance-=high;         //落地不反弹，需要减去最后一次加上的反弹距离
    printf("%.2lf %.2lf\n", high, distance);
    
    return 0;
}