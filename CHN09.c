#include<stdio.h>
int main(){
int n,i=0,j=0,a,b;
scanf("%d",&n);
char st[100];
for(i=0;i<n;i++){
    a=0;
    b=0;
    scanf("%s",st);
    for(j=0;st[j] != '\0';j++)
    {
        if(st[j]=='a'){
           a++;
        }
        else
            {b++;
            }
    }   if(a>b)
            printf("%d\n",b);
        else
            printf("%d\n",a);
}
    return 0;
}