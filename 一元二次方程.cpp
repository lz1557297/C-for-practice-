#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,delt,x1,x2;
    printf("ax^2+bx+c=0\ninput the numbers�a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a!=0){
        delt=b*b-4*a*c;
        if(delt>=0)
        {
            x1=(-b+sqrt(delt))/(2*a);
            x2=(-b-sqrt(delt))/(2*a);
            printf("x1=%.6f,x2=%.6f\n",x1,x2);}
        else printf("error\n");
    }
    else printf("error\n");
    return 0;
}
