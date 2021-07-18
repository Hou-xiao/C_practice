/*题目描述
输入三个字符串，按由小到大的顺序输出
输入
3行字符串
输出
按照从小到大输出成3行
样例输入
cde
afg
abc
样例输出
abc
afg
cde*/

#include<stdio.h>
#include<string.h>
// #include<stdlib.h>

int main(){
    char a[3][128],array[128];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        gets(a[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = i+1; j < 3; j++)
        {
            if (strcmp(a[i],a[j])>0)
            {
                memset(array,0,sizeof(array));
                strcpy(array,a[i]);
                // free(a[i]);
                strcpy(a[i],a[j]);
                // free(a[j]);
                strcpy(a[j],array);
                // free(array);
            }
            
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        puts(a[i]);
    }
    
    
    return 0;
}