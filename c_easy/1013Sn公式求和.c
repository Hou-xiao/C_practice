/*题目 1013: [编程入门]Sn的公式求和
时间限制: 1Sec 内存限制: 128MB 提交: 25408 解决: 16896
题目描述
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。

输入
n

输出
Sn的值

样例输入
5
样例输出
24690*/

#include<stdio.h>
#include<math.h>
int sn(int n){
    int a=0,b=0;
    if (n==1)
    {
        return 2;
    }else{
        for (int i = 0; i < n; i++)
        {
            a = a*10 + 2;
            b += a;
        }
        return b;
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",sn(n));
    
    return 0;
}