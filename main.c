#include <stdio.h>
#include <stdlib.h>
#include "linked_int.h"
node*start = NULL;
int main()
{
start=creat_list(start);

display_list(start);


    return 0;
}



int stack_araay[5];
int sp=0;
int push(int data)
{
    if(sp==5)
    {
        return 0 ;
    }
    else{
       stack_araay[sp]=data;
       sp++;
       return 1;
    }
}

int pop(int *data)
{
    if(sp==0)
    {
        return 0 ;
    }
    else{
            sp--;
       *data=stack_araay[sp];

       return 1;
    }
}
int main()
{
 
int x,y,data;
int r;
while(1)
{

printf("enter data = ");
scanf("%d",&data);
if(data>0)
{
  int x = push(data);
    if(x==1)
    printf("push %d",data);
    else if(x==0)
    printf("full");
}
if(data==0)
{
  int y=  pop(&r);
    if(y==0)
     printf("empty");
    else if(y==1)
    {
        printf("poped %d",r);
    }



}
}

    return 0;
