#include<stdio.h>
#include<math.h>
int main(){
int t,n,i,ans;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&n);
    ans=sqrt(n);
    printf("%d\n",ans);
}
return 0;
}