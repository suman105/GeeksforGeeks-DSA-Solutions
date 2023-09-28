//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;

 void inputData();
 

// } Driver Code Ends

 void inputData()
{
       int a;
       string b;
       cin >> a;
       cin >> b;
       cout << a << " " << b;
      //Use cin to take input and cout a and b with a space between them. Also use an endl after output
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //function call
        inputData();
        cout<<endl;
    }
}



// } Driver Code Ends