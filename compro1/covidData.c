#include <stdio.h>
struct covid_data{
    int id_c;
    char c[31];
    int count;
    int die;
} typedef covid;
int main(){
    int n;
    scanf("%d",&n);
    covid a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].id_c);
        scanf("%s",a[i].c);
        scanf("%d",&a[i].count);
        scanf("%d",&a[i].die);
    }
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            int i_m;
            for(int i=0;i<n;i++){
                if(x==a[i].id_c){
                    i_m=i;
                    break;
                }
            }
            printf("%s ",a[i_m].c);
            printf("%d ",a[i_m].count);
            printf("%d\n",a[i_m].die);
        }
    }

    return 0;
}
