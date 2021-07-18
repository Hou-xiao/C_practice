/*题目描述
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
输入
N
输出
数列前N项和
样例输入
10
样例输出
16.48
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int j=1,k=2,t;
    double temp=0.0;
    for (int i = 0; i < n; i++)
    {
        temp+=1.0*k/j;
        t=k;
        k+=j;
        j=t;
        
    }
    printf("%.2f\n",temp);
    
    return 0;
}