#include<stdio.h>
int main(){
int t,rem1,rem2,i,n,sum;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
rem1=n%10;
while(n!=0){
rem2=n%10;
n=n/10;
}
sum=rem1+rem2;
printf("%d\n",sum);
}
return 0;
}