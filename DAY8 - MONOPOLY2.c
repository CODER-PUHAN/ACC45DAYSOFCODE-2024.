#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        
        int P,Q,R,S;
        scanf("%d",&P);
        scanf("%d",&Q);
        scanf("%d",&R);
        scanf("%d",&S);
        if(P>Q+R+S||Q>P+R+S||R>Q+P+S||S>P+Q+R){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        
        }
        
    }
	// your code goes here

}

