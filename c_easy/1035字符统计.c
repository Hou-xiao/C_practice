/*编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，
在主函数中输入字符串以及输出上述结果。 只要结果，别输出什么提示信息。*/
#include<string.h>
#include<stdio.h>
void sum(char *n);

int main(){
    char a[100];
    gets(a);
    sum(a);
    return 0;
}

void sum(char *n){
    char *p = n;
    int digital=0,word=0,bank=0,other=0;
    while (*p!='\0')
    {
        if ((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
            word++;
        else if (*p>='0'&&*p<='9')
            digital++;
        else if (*p==' ')
            bank++;
        else
            other++;
        p++;
    }
    printf("%d %d %d %d\n", word, digital, bank, other);
}