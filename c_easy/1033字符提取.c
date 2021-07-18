/*题目描述
写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
输入
一行字符串
输出
顺序输出其中的元音字母（aeiou）
样例输入
abcde
样例输出
ae*/
#include<stdio.h>
#include<string.h>
void extract(char* a, char* b);
int main(){
    char a[128],b[128];
    gets(a);
    extract(a,b);
    puts(b);
    return 0;
}
void extract(char* a, char* b){
    while (*a != '\0')
    {
        if (*a == 'a'||*a == 'e'||*a == 'i'||*a == 'o'||*a == 'u')
        {
            *b++ = *a;
        }
        a++;
    }
    *b++ = '\0';
}