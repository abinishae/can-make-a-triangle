#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> a, int N){
        vector<int> s;
        for(int i=0; i<N-2; i++){
            if(((a[i] + a[i+1])>a[i+2]) && ((a[i] + a[i+2]) >a[i+1]) && ((a[i+1]+a[i+2]) >a[i])){
                s.push_back(1);
            }
            else 
            s.push_back(0);
        }
        return s;
    }
}; 

int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        auto ans = ob.canMakeTriangle(A, N);
        for(int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
        
    }
