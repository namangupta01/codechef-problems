#include<stdio.h>
int main(){
int k=1,ambiguous,i,j,l;
while(k!=0){
    scanf("%d",&k);
    if(k!=0){
    int arr[k];
    for(j=0;j<k;j++){
        scanf("%d",&arr[j]);
    }
    ambiguous = 0;
    for(l=0;l<k;l++){
        if(!(arr[arr[l]-1] == l+1)){
            ambiguous=1;
            break;
        }
    }
    if(ambiguous == 0)
        printf("ambiguous\n");
    else
        printf("not ambiguous\n");
    }
}
return 0;
}