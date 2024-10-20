#include <stdio.h>
#include <math.h>
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,a,b,rounds;
	    scanf("%d %d %d",&n,&a,&b);
	    rounds=log2(n);
	    printf("%d\n",rounds*a+(rounds-1)*b);
	}
	return 0;
	
	    
	 

}

