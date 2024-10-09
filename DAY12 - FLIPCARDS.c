#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(y<(x-y)){
	        printf("%d\n",y);
	    }
	    else{
	        printf("%d\n",x-y);
	    }
	    
	}

}

