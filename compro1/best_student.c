#include <stdio.h>
typedef struct{
    char id[9];
    char name[31];
    char surname[51];
    float score;
} Student;
int main(){
    int n ,c_m;
    float max=0;
    scanf("%d",&n);
    Student a[n];
    for(int i=0;i<n;i++){
        scanf("%s",a[i].id);
        scanf("%s",a[i].name);
        scanf("%s",a[i].surname);
        scanf("%f",&a[i].score);
        if(a[i].score>max){
            max=a[i].score;
            c_m=i;
        }
    }

    printf("%s %s %s %.2f",a[c_m].id,a[c_m].name,a[c_m].surname,a[c_m].score);

    return 0;
}
