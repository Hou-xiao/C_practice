#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%6.2f ",a);
        }
        printf("\n");
    }
    return 0;
}