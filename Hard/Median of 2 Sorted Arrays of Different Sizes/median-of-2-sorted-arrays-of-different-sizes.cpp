//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int i=0,j=0,index=0;
        
        int a=array1.size();
        int b=array2.size();
        
        int k=(a+b);
        k = k/2;
        bool st = false;
        
        if((a+b)%2==0)
            st = true;
       
        k+=1; 
         
        int temp[k];
        
        while(i<a && j<b && index<k)
        {
            if(array1[i]<=array2[j]){
                temp[index] = array1[i];
                ++i;
                ++index;
            }
            else{
                temp[index] = array2[j];
                ++j;
                ++index;
            }
        }
        
        while(i<a && index<k)
        {
            temp[index] = array1[i];
            ++i;
            ++index;
        }
        
        while(j<b && index<k)
        {
            temp[index] = array2[j];
            ++j;
            ++index;
        }
        
        if(st==true){
            return (double(temp[k-1]+temp[k-2]))/(2) ;
        }
        
        return temp[k-1];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends