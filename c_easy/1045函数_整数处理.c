/*输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
写三个函数； ①输入10个数；②进行处理；③输出10个数。*/
#include<stdio.h>

void order(int number[]);

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    order(a);
    return 0;
}

void order(int number[]){
    int max=0,min=number[0],temp=0,max_index,min_index;
    for (int i = 0; i < 10; i++)
    {
        if(min>number[i])
        {
            min=number[i];
            min_index=i;
        }
    }
    temp=number[0];
    number[0]=min;
    number[min_index]=temp;

    for (int j = 0; j < 10; j++)
    {
        if (max<number[j])
        {
            max=number[j];
            max_index=j;
        }
    }
    temp=number[9];
    number[9]=max;
    number[max_index]=temp;

    for (int k = 0; k < 10; k++)
    {
        printf("%d ",number[k]);
    }
}