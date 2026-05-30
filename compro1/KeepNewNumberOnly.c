#include <stdio.h>
int main(){
    int a[1000000];//สร้างไว้ล้านช่อง
    int c=0,num=0;
    int x,found;
    while(1){
        found=0;//เช็ตค่า เป็น 0
        scanf("%d",&x); //รับค่าx เข้ามา
        if(x<=0){
            break;
        }
        num++;//นับจำนวนที่รับเข้ามาทั้งหมด
        for(int i=0;i<c;i++){
            if(a[i]==x){
               found++;//นับตัวซ้ำ
                break;
            }

        }
        if(found==0){
            a[c]=x;//เก็บค่าใหม่
            c++;
        }
    }
    printf("%d\n%d\n",num,c);
    for(int i=0;i<c;++i){
        printf("%d ",a[i]);// แสดงเลขที่ไม่ซ้ำเรียงตามลำดับที่เจอ
    }
    return 0;
}
