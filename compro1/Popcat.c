#include <stdio.h>
void main(){
    int n,th=0,tw=0,ma=0,fin=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==1){
            th++;
        }
        else if(x==2){
            tw++;
        }
        else if(x==3){
            ma++;
        }
        else if(x==4){
            fin++;
        }
    }
    if(th>tw&&th>ma&&th>fin){
        printf("Thailand won with a score of %d",th);
    }
    else if(tw>th&&tw>ma&&tw>fin){
        printf("Taiwan won with a score of %d",tw);
    }
    else if(ma>th&&ma>tw&&ma>fin){
        printf("Malaysia won with a score of %d",ma);
    }
    else if(fin>th&&fin>tw&&fin>ma){
        printf("Finland won with a score of %d", fin);
    }

}
