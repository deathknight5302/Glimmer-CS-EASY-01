#include <stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    c=a%b;
    while(c>0){//辗转相除法
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d",b);
    return 0;
}
