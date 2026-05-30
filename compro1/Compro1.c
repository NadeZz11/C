#include <stdio.h>
struct student_info{
    char id[11];
    char dept[3];
}typedef student;

struct GROUP{
    student std[cou];
    char sec[3];
    int amount;
}typedef group;


void main(){
    int n;
    scanf("%d",&n);
    group a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].sec);
        scanf("%d",&a[i],amount);
        for(int j=0;j<cou;j++){
            scanf("%s",a[i].std[j].id)
            scanf("%s",a[i],std[j].dept);

        }
    }

}
