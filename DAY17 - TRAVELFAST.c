#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y){
	        printf("CAR\n");
	    }
	    if(y>x){
	        printf("BIKE\n");
	    }
	    if(y==x){
	        printf("SAME\n");
	    }
	}

}

