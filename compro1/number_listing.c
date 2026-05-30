#include <stdio.h>
int main(){
    int a[10001];
    int n,num;
    for(int i=1;i<=10000;i++){//ทำarrayทุกตัวเป็น 0
        a[i]=0;
    }
    scanf("%d",&n);//รับจำนวนเลขเข้ามา
    for(int i=0;i<n;i++){
        scanf("%d",&num);//รับตัวเลข
        a[num]+=1;//ให้arrayตำแหน่งที่รับเข้ามา บวกขึ้น1
    }
    for(int i=1;i<=10000;i++){
        if(a[i]>0){//ถ้าarrayตัวไหนมีค่ามากกว่าศูนย์ ให้พิม i ออกมา
            printf("%d ",i);
        }
    }

    return 0;
}
