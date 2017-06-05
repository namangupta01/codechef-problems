#include<stdio.h>
int main(){
int with;
float amt;
scanf("%d",&with);
scanf("%f",&amt);
if(with%5==0){
    if(with+0.50<=amt){
        printf("%.2f",(amt-with-0.50));
    }
    else
    printf("%.2f",amt);
    }
else
printf("%.2f",amt);
return 0;
}
 