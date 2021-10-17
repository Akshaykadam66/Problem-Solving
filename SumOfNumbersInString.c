// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends

 
#include <cstring>
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
         int k=0,i,j,value,n=strlen(str);
         int sum=0;
    	 for(i=0;i<n;i++){
    	      j=i;
    	      while(str[j]>=48 && str[j]<=57 && j<n){
    	          value = str[i]-48;
    	          k=k*10;
    	          k+=value;
    	          j+=1;
    	      }
    	      sum+=k;
    	      k=0;
    	 }
    	 return sum;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends