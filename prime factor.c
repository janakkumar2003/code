#include<stdio.h>
void primefactor(int a);
int main()
{

    int a;
    printf("enter a number");
    scanf("%d",&a);
    primefactor(a);
}

//this code is okay //let me add some comments

void primefactor(int a)
{
    int i;
    for(i=2;i<=a;i++)
    {
        while(a%i==0)
        {
            printf("%d\n",i);
            a=a/i;
        }
    }
}
