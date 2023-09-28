//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends

void binSort(int a[], int n)
{
   int i,m=a[0],j;
        for(i=1;i<n;i++){
            if(a[i] > m){
                m = a[i];
            }
        }
        int c[m+1];
        for(i=0;i < m+1;i++){
            c[i] = 0;
        }
        
        for(i=0;i<n;i++){
            c[a[i]]++;
        }
        i=0,j=0;
        while(i < m+1)
         {
         	if(c[i] > 0)
         	{
         		a[j] = i;
    			 c[i]--;++j;	
    		}
    		else
    		{
    			++i;
    		}
    	 }
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