
#include <stdio.h>
struct stud{
    char stuid[11];
    char major[3];
    int quiz;
    double mid;
    double fina;
}typedef STUDENT;

struct section{
    char gnum[3];
    STUDENT s[100];
}typedef group;

void main(){
    int n, member;
    scanf("%d", &n);
    group g[n];
    for(int i=0; i<n; i++){
        scanf("%s", g[i].gnum);
        scanf("%d", &member);
        printf("wowloaakdd");
        for(int j=0; j<member; j++){
            g[i].s[j].quiz = 0;
        }
        for(int j=0; j<member; j++){
            scanf("%s", g[i].s[j].stuid);
            scanf("%s", g[i].s[j].major);
            for(int k=0; k<5; k++){
                int x;
                scanf("%d",&x);
                g[i].s[j].quiz += x;
            }
            scanf("%lf", &g[i].s[j].mid);
            scanf("%lf", &g[i].s[j].fina);
        }
    }
    char command;
    while(1){
        scanf(" %c", &command);
        if(command == 's'){

        }
        if(command == 'a'){

        }
        if(command == 'p'){

        }
        if(command == 'e'){

        }
    }

}
