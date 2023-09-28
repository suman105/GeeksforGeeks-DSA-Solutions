//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int FindCandidate(int a[], int size)
    {
        int majorityElement=a[0];
        int count=1;
        for(int i=1;i<size;i++)
        {
            if(majorityElement == a[i])  ++count;
            else    count -= 1;
            if(!count)
            {
                count=1;
                majorityElement=a[i];
            }
        }   
        return majorityElement;
    }
    
    int majorityElement(int a[], int size)
    {
        int cand = FindCandidate(a,size);
        int count=0;
        for(int i=0;i<size;i++){
            if(a[i]==cand)  ++count;
        }
        if(count > size/2)  return cand;
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends