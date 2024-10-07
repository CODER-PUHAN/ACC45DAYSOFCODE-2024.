#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int w;
        scanf("%d",&w);
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if(w==x||w==y||w==z||w==x+y||w==y+z||w==z+x||w==x+y+z){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
    
}



