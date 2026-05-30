#include <stdio.h>
#include <string.h>
void main(){
    int n;
    char a[100];
    scanf("%s",a);
    scanf("%d",&n);
    int l = strlen(a)*(n-1)+1;
    char graph[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            graph[i][j]='_';
        }
    }
    char now='1',next=a[0];
    for(int i=0;i<strlen(a);i++){
        if(now!=next){
            for(int j=0;j<n;j++){
                graph[j][i*(n-1)]= 'x';
            }
        }
        now =next;
        next = a[i+1];
    }
    int cur;
    if(a[0]=='0'){
        cur=0;
    }
    else{
        cur=1;
    }
    for(int i=0;i<l;i++){
        if(graph[0][i]=='x'||(graph[0][i]=='_'&&i==0)){
            cur=(cur+1)%2;
        }
        graph[cur*(n-1)][i]='x';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            printf("%c",graph[i][j]);
        }
        printf("\n");
    }


}
