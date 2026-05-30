#include <stdio.h>
typedef struct{
    char id[9];
    char name[31];
    char surname[51];
    int year;

}Student;
int main(){
    int n;
    scanf("%d",&n);
    Student s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].id);
        scanf("%s",s[i].name);
        scanf("%s",s[i].surname);
        scanf("%d",&s[i].year);
    }
    int x,c=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(s[i].year==x){
            printf("%s %s %s\n",s[i].id,s[i].name,s[i].surname);
            c++;
        }
    }
    if(c==0){
        printf("None");
    }
    return 0;
}
