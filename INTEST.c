#include<stdio.h>
 
int main(){
int n,k,i;
long int number;
int counter = 0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++){
    scanf("%d",&number);
    if(number%k==0){
        counter++;
    }
}
printf("%d",counter);
return 0;
}