#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int month=((y-1)/x);
	    if(y<=x){
	        printf("0\n");
	        
	    }
	    else{
	        printf("%d\n",month);
	    }
	    
	}

}

