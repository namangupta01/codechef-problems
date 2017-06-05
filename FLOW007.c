
#include<stdio.h>
int main(){
int t,n,i,num;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
num=0;
while(n!=0){
num=num*10+n%10;
n=n/10;
}
printf("%d\n",num);
}
return 0;}