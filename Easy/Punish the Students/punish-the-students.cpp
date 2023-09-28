//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void swap(int *p, int *q)
    {
        int t;
        t = *p;
        *p = *q;
        *q = t;
    }
    int shouldPunish (int a[], int m[], int n, double avg)
    {
        int i,j,c=0,s=0;
        double l;
        for(i=0;i<(n-1);i++)
        {
            for(j = 0;j < n-i-1;j++)
            {
                if(a[j] > a[j+1]){
                    swap(&a[j],&a[j+1]);
                    ++c;
                }
            }
        }
        for(i=0;i<n;i++){
            s = s + m[i];
        }
        s = s - c*2;
        l = s/n;
        
        if(l > avg){
            return 1;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}

// } Driver Code Ends