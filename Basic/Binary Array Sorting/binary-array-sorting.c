//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends

void binSort(int A[], int N)
    {
       int count0=0,count1=0,i=0;
       while(i<N){
           if(A[i]) ++count1;
           else ++count0;
           ++i;
       }
       i=0;
       while(count0--)  A[i++]=0;
       while(count1--)  A[i++]=1;
    }


//{ Driver Code Starts.

int main() {
	int T;
	scanf("%d", &T);
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    scanf("%d", &N); //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      scanf("%d", &A[i]);
	      
	    binSort(A,N);
	    
	    for(int i = 0; i  < N; i++)
	        printf("%d ", A[i]);
	      
	    printf("\n");
	}
	return 0;
}
// } Driver Code Ends
