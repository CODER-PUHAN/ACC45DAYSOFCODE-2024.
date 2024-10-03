#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int A=500;
    int B=1000;
    while(t--){
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        
        int z=(A-(x*2))+(B-((y+x)*4));
        int g=(B-(y*4))+(A-((y+x)*2));
        if(z>g){
            printf("%d\n",z);
        }
        else{
            printf("%d\n",g);
        }
        
        
        
    }
    
	

}

