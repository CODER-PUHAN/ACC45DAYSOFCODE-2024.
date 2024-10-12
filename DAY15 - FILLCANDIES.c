#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,m;
	    scanf("%d %d %d",&n,&k,&m);
	    int z;
	    z=k*m;
	    if(n%z==0){
	        printf("%d\n",n/z);
	    }
	    else{
	        printf("%d\n",(n/z)+1);
	    }
	}

}

