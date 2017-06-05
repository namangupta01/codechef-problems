#include<stdio.h>
int main(){
int t,i,n,rem,j,sum=0;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
sum=0;
while(n!=0){
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("%d\n",sum);
}
return 0;
}