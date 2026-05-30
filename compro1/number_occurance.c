#include <stdio.h>
void main(){
    int n,target,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);//เก็บค่าarray
    }
    scanf("%d",&target);// เก็บตัวที่สนใจ
    for(int i=0;i<n;i++){
        if(target==a[i]){//เช็คตัวa[i]เท่ากับเป้าหมายมั้ย
            c+=1;
            printf("%d ",i+1);//พิมตำแหน่ง
        }

    }
    if(c==0){
        printf("0");
    }
}
