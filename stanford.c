#include<stdio.h>
void shift(int a[], int x){
    int i,j;
    for(i=0;i<7;i++){
        if(a[i]==x){
            for(j=i;j<7-1;j++){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            break;
        }
    }
}
void sheet(int a[7], int currRoll, int max)
{
    int i;
    if(currRoll>7){
        return;
    }
    else{
        for(i=0;i<7-max;i++){
            if(currRoll==a[i]){
                if(currRoll!=7){
                 printf("%d ", i);   
                }
                else{
                    printf("%d", i);
                }
                shift(a,a[i]);
                break;
            }
        }
        sheet(a, currRoll+1, max+1);
        
    }
}


int main(){
    int i;
    int a[7];
    for(i=0;i<7;i++){
        scanf("%d", &a[i]);
    }
    sheet(a,1,0);
}
