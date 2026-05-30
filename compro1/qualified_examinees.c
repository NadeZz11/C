#include <stdio.h>
struct id_score{
    char id[6];
    int score;

}typedef id_score;
int main(){
    int n,c=0;
    double avg=0;
    scanf("%d",&n);
    id_score a[n];
    for(int i=0;i<n;i++){
        scanf("%s",a[i].id);
        scanf("%d",&a[i].score);
        avg+=a[i].score;
    }
    avg=avg/n;
    for(int i=0;i<n;i++){
        if(a[i].score>=avg){
            c++;
        }
    }
    printf("%d\n",c);
    for(int i=0;i<n;i++){
        if(a[i].score>=avg){
            printf("%s\n",a[i].id);
        }
    }
    return 0;
}

