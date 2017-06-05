#include<stdio.h>
int main(){
int k,i,n,counter,num;
scanf("%d",&k);
for(i=0;i<k;i++){
    counter = 0;
    scanf("%d",&n);
    num=5;
    while(num<=n){
        counter  = counter + n/num;
        num=num*5;
        }
    printf("%d\n",counter);
    }
return 0;
}