#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,d;
	    
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    int x,y;
	    if(a>b){
	        x=a;
	    }
	    else{
	        x=b;
	    }
	    if(c>d){
	        y=c;
	        
	    }
	    else{
	        y=d;
	    }
	    printf("%d\n",x+y);

	}
	

}

