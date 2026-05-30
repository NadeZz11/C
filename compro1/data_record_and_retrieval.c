#include <stdio.h>
struct student{
    char id_s[9];
    char name_s[31];
    char surname_s[51];
    int year;
}typedef student_info;
int main(){
    int n,y,c=0;
    scanf("%d",&n);
    student_info a[n];
    for(int i=0;i<n;i++){
        scanf("%s",a[i].id_s);
        scanf("%s",a[i].name_s);
        scanf("%s",a[i].surname_s);
        scanf("%d",&a[i].year);
    }
    scanf("%d",&y);
    for(int i=0;i<n;i++){
        if(a[i].year==y){
            printf("%s ",a[i].id_s);
            printf("%s ",a[i].name_s);
            printf("%s\n",a[i].surname_s);
            c++;
        }

    }
    if(c==0){
        printf("None");
    }
    return 0;
}
