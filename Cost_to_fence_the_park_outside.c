#include<stdio.h>
int main()
{
    int L,B,W,C,a,A,ta,c;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A=L*B;
    a=(L+2*W)*(B+2*W);
    ta=a-A;
    c=ta*C;
        printf("%d",c);
        return 0;
}
