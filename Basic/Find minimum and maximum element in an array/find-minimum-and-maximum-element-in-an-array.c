//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}
// } Driver Code Ends

struct pair getMinMax(long long int arr[], long long int n) {
    struct pair x;int i;
    if(n == 1){
        x.min = arr[0];
        x.max = arr[0];
    }
    if(n == 2){
        if(arr[0] > arr[1]){
            x.min = arr[1];
            x.max = arr[0];
        }
        else{
            x.min = arr[0];
            x.max = arr[1];
        }
    }
    else
    {
        x.min = arr[0];x.max = arr[0];
        for(i=1;i<n;i++){
            if( x.min > arr[i]){
                x.min = arr[i];
            }
            if(x.max < arr[i]){
                x.max = arr[i];
            }
        }
    }
    return x;
}