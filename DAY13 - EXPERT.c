#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    float x,y;
	    scanf("%d %d",&x,&y);
	    float z=(y/x)*100;
	    if(z<50.0){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;

}

