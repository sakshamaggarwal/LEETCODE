//      Less Complexity

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> v;
        vector<int> a(k,0);
        int i=0;
        
        while(i>=0)
        {
            a[i]++;
            
            if(a[i]>n)
            {
                i--;
            }
            else if(i==(k-1))
            {
                v.push_back(a);
            }
            else
            {
                i++;
                a[i]=a[i-1];
            }
        }
        return v;
    }
};

//      BACKTRACKING ::

// class Solution {
// public:
//     void helper(vector<vector<int>> &v,vector<int> a,int n,int k,int b)
//     {
//         if(a.size()==k)                 //k==0
//             v.push_back(a);
//         for(int i=b;i<=n;i++)
//         {
//             if(a.size()>k)
//                 return;
//             if(n>=i)
//             {
//                 a.push_back(i);
//                 helper(v,a,n,k,i+1);    //k-1
//                 a.pop_back();
//             }
//         }
//     }
//     vector<vector<int>> combine(int n, int k) {
        
//         vector<vector<int>> v;
//         vector<int> a;
        
//         helper(v,a,n,k,1);
//         return v;
//     }
//};
