#include "array.h"
#include<stdio.h>
#include<stdlib.h>

const BLOCK_SIZE = 20;

Array array_create(int init_size)
{
    Array a;
    a.size = init_size;
    a.array = (int *)malloc(sizeof(int)*a.size);
    return a;
}

void array_free(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->size = 0;
}
//封装
int array_size(const Array *a)
{
    return a->size;
}
//利用返回数组地址
int* array_at(Array *a, int index)
{
    if (index >= a->size)
    {
        array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);
    }
    
    return &(a->array[index]);
}
// //返回数组中index所指位置的值
// int array_get(const Array *a, int index)
// {
//     return a->array[index];
// }
// //设置数组值
// void array_set(Array *a, int index, int value)
// {
//     a->array[index] = value;
// }

void array_inflate(Array *a, int more_size)
{
    int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
    int i = 0;
    for ( i = 0; i < a->size; i++)
    {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(int argc, char const *argv[])
{
    Array a = array_create(100);
    printf("%d\n",array_size(&a));
    *array_at(&a,0) = 20;
    printf("%d\n",*array_at(&a,0));
    int number = 0;
    int cnt = 0;
    while(number != -1)
    {
        scanf("%d",&number);
        *array_at(&a,cnt++) = number;
    }
    array_free(&a);
    return 0;
}