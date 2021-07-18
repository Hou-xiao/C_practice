#include<stdio.h>
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
float max(float a, float b, float c){
    return (a>b?(a>c?a:c):(b>c?b:c));
}
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("%.3f\n",max(a,b,c));
    printf("%.3f\n",MAX(a,b,c));
    return 0;
}