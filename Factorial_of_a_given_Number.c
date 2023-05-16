#include<stdio.h>
int main()
{
    int i,n,f;
    scanf("%d",&n);
    f=1;
    for (int i=1;i<=n;i++){
        f=f*i;
    }
        printf("%d ",f);
     
}