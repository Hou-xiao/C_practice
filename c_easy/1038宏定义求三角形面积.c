/*三角形面积=SQRT(S*(S-a)*(S-b)*(S-c)) 其中S=(a+b+c)/2，a、b、c为三角形的三边。 
定义两个带参的宏，一个用来求area， 另一个宏用来求S。 
写程序，在程序中用带实参的宏名来求面积area。*/

#include<stdio.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("%.3lf\n",area(S(a,b,c),a,b,c));
    return 0;
}