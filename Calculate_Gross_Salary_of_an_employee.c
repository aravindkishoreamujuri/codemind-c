#include<stdio.h>
int main()
{
    float hra,da,pf,gs,bs;
    scanf("%f%f%f",&hra,&da,&bs);
    pf=0.12*hra;gs=hra+da+pf+bs;
    printf("%0.2f
",pf);
    printf("%0.2f
",gs);
    
}