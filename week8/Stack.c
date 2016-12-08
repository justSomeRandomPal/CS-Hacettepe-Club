#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top=-1;
void Push();
void Pop();
int Top();
void IsEmpty();
void Print();
int main ()
{
    int i;
    int c=1;

    printf("Enter a command for operatosts:\n");
    printf("Enter 1 for Push.\n");
    printf("Enter 2 for Pop.\n");
    printf("Enter 3 for Top.\n");
    printf("Enter 4 for IsEmpty.\n");
    printf("Enter 5 for Print.\n");
    printf("Enter -1 for quit.\n");

    while(c==1)
    {

        scanf("%d",&i);

        if(i==1)
            Push();
        else if (i==2)
            Pop();
        else if (i==3)
            Top();
        else if (i==4)
            IsEmpty();
        else if (i==5)
            Print();
        else if (i==-1)
        {
            printf("Goodbye CS Hacettepe Club...\n");
            c=0;
        }
        else
            printf("You entered wrong command!!!\n");
    }

    return 0;



}
void Push()
{
    int x;
    printf("Push:");
    scanf("%d",&x);
    if(top==MAX_SIZE-1)
    {
        printf("ERROR Stack overflow\n");
        return;
    }
    stack[++top]=x;
}
void Pop()
{
    printf("Pop:\n");
    if(top==-1)
    {
        printf("ERROR no element to pop\n");
        return;
    }
    else
        top--;

}
int Top()
{
    printf("Top:\n");
    return stack[top];
}

void IsEmpty()
{
    if(top==-1)
        printf("Stack is empty.\n");
    else
        printf("Stack is not empty.\n");
}
void Print()
{
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++)
        printf("%d ",stack[i]);
    printf("\n");
}
