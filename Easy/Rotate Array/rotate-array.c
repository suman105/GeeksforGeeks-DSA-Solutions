//{ Driver Code Starts
#include<stdio.h>


// } Driver Code Ends
//User function Template for C

//Function to rotate an array by d elements in counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
    // code here
    while(d>n)
        d=d-n;
        
    //Solution 1 with O(n) + O(d)
    // int b[d];
    // for(int i=0;i<d;i++)
    //     b[i]=arr[i];
    // int i=0,j=d;
    // for(i=0;i<n-d;i++){
    //     arr[i]=arr[j];++j;
    // }
    // j=0;
    // for(;i<n;i++){
    //     arr[i]=b[j];
    //     ++j;
    // }
    
    //Solution 2 with O(n)+O(1)
    int i=0,j=d-1;
    while(i<j){
        int x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;
        ++i;--j;
    }
    i=d;j=n-1;
    while(i<j){
        int x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;
        ++i;--j;
    }
    i=0;j=n-1;
    while(i<j){
        int x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;
        ++i;--j;
    }
}


//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	scanf("%d",&t);
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    scanf("%d%d",&n, &d);
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        scanf("%d",&arr[i]);
	    }
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}
// } Driver Code Ends