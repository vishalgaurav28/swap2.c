/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>
void swap(int*x,int*y)
{
    if(*x==*y)
    return;
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int x,y;
printf("enter two numbers\n",x,y);
scanf("%d%d",&x,&y );
swap(&x,&y);
printf("%d%d",x,y);
return 0;

}
