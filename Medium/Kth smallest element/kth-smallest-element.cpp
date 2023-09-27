//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int a[], int l, int r, int k) {
        int i,m=a[0],j,n;
        n = r + 1;
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
    	 return a[k-1];
    }
};



//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends