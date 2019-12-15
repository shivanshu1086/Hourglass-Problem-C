#include<stdio.h>
#include <math.h>

int main(){
    int a[6][6],i,j,k,sum=0,mid=1,sum_array[16],temp;
    // printf("Enter the array");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    j=0;
    k=0;
    while(j+2<6 & mid<5){
        for(i=0;i<4;i++){
            sum = sum + a[i][j] + a[i][j+1] + a[i][j+2];
            sum = sum + a[i+1][mid];
            sum = sum + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            sum_array[k] = sum;
            // printf("%d %d %d\n",a[i][j],a[i][j+1],a[i][j+2]);
            // printf("\t%d\n",a[i+1][mid]);
            // printf("%d %d %d\n",a[i+2][j],a[i+2][j+1],a[i+2][j+2]);
            // printf("%d ",sum_array[k]);
            // printf("\n");
            sum=0;
            k=k+1;
        }
        j=j+1;
        mid=mid+1;
    }
    for(i=0;i<16;i++){
        for(j=0;j<15-i;j++){
            if(sum_array[j] > sum_array[j+1]){
                temp = sum_array[j];
                sum_array[j] = sum_array[j+1];
                sum_array[j+1] = temp;
            }
        }
    }
    printf("%d",sum_array[15]);
    return 0;
}
//This is written by Shivanshu.
