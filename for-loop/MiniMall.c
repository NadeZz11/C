#include <stdio.h>
#include<limits.h>
void main(){
    int N,s,total=0,count=0;//s=ยอดขาย
    float avg;
    int min = INT_MAX;
    int max = INT_MIN;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&s);
        if(s<0){
            printf("Invalid sale data!\n");
            continue;
        }
        else if(s>=0){
            count++;
            if(s>max){
                max = s;

            }
            if(s<min){
                min = s;
            }
            total+=s;
        }

    }
    avg=1.0*total/count;
    if(count>0){
        printf("Total sales = %d\nMax sale = %d\nMin sale = %d\n",total,max,min);
        printf("Average sales = %.2f",avg);
    }
    else if (count==0){
        printf("No valid sales data.");
    }
}
