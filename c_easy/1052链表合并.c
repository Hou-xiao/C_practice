#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    double number;
    double gread;

    struct student *next;
}*node, Node;       //结点

node creat(int n);  //创建链表function

void output(node l);    //输出函数
void order(node l1, node l2);   //排序函数

int main(){
    int n, m;
    node head1, head2;  //两链表头结点
    scanf("%d %d",&n, &m);
    head1 = creat(n);
    head2 = creat(m);
    order(head1,head2);

    return 0;
}

node creat(int n){
    node h; //头结点指针
    h = (node)malloc(sizeof(Node));
    h->next = NULL;
    node q = h;     //q指向头结点
    node p;

    for (int i = 0; i < n; i++)
    {
        p = (node)malloc(sizeof(Node));
        scanf("%lf%lf",&(*p).number, &(*p).gread);
        p->next = q->next;
        q->next = p;
        q = p;
    }
    
    return(h);      //返回头结点
}

void output(node l){
    l = l->next;
    node q;
    while (l != NULL)
    {
        printf("%.0f %.0f\n",l->number,l->gread);
        q=l;
        l=l->next;
        free(q);
    }   
}

void order(node l1, node l2){
    node q;
    q = l1;
    l2 = l2->next;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next=l2;
    q=l1->next;

    node min;

    int t;
    int n,g;
    node p;
    while (q != NULL)
    {
        p=q;

        t=p->number;
        min = p;
        while (p!=NULL)
        {
            if (p->number<t)
            {
                t = p->number;
                min = p;
            }
            p = p->next;
        }
        n = q->number;
        q->number = min->number;
        min->number = n;
        g = q->gread;
        q->gread = min->gread;
        min->gread = g;

        q=q->next;
    }
    output(l1);
}