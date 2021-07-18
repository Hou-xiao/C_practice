/*题目 1012: [编程入门]字符串分类统计
时间限制: 1Sec 内存限制: 128MB 提交: 31767 解决: 15991
题目描述
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

输入
一行字符,长度不超过200

输出
统计值

样例输入
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
样例输出
23 16 2 4*/

#include<stdio.h>
#include<stdlib.h>
int digital=0;
int strings = 0;
int bank = 0;
int others =0;
int main(){
    char *str;
    str = (char *)malloc(sizeof(char)*101);
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='0' && str[i]<='9')
            digital++;
        else if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            strings++;
        else if (str[i] == ' ')
            bank++;
        else others++;
    }
    printf("%d %d %d %d\n", strings, digital, bank, others);
    
    return 0;
}