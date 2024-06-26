//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int nums[],int len)
    {
        //int len = nums.size();
        int posind = 0;
        int negind = 1;
        vector<int> ans(len);
        for (int i = 0; i < len; i++) {
            if (nums[i] > 0) {
                ans[posind] = nums[i];
                posind += 2;
            } else {
                ans[negind] = nums[i];
                negind += 2;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends