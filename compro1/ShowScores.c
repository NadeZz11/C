#include <stdio.h>
struct student_score{
    char id[11];
    double score;

}typedef student;
int main(){
    int n;
    float k;
    scanf("%d%f",&n,&k);
    student a[n];
    for(int i=0;i<n;i++){
        scanf("%s",a[i].id);
    }
     for(int j=0;j<n;j++){
        a[j].score=0;
    }
    for(int  i=0;i<k;i++){
        for(int j=0;j<n;j++){
            int x;
            scanf("%d",&x);
            a[j].score+=x;
        }
    }
    for(int j=0;j<n;j++){
        printf("%s ",a[j].id);
        printf("%.2f\n",a[j].score/k);
    }
    return 0;
}
