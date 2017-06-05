#include<stdio.h>
int main(){
int n,i,pla1,pla2,player,lead =0,tot1=0,tot2=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&pla1);
    scanf("%d",&pla2);
    if(pla1>pla2){
        tot1=tot1+pla1;
        tot2=tot2+pla2;
        if(tot1-tot2>lead){
            lead = tot1-tot2;
            player = 1;
        }
        }
    else {
        tot1=tot1+pla1;
        tot2=tot2+pla2;
        if(tot2-tot1>lead){
        lead = tot2-tot1;
        player = 2;
        }
    }
}
printf("%d %d",player,lead);
return 0;
}
 