class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        
        vector<bool> tf;
        int n=A.size(),i=0,num=0;
       // reverse(A.begin(),A.end());
        for(int i=0;i<n;i++)
        {
            num=(num*2+A[i]);
           // num=(num+(pow(2,i)*A[i]));
            if((num%5)==0)
                tf.push_back(1);
            else
                tf.push_back(0);
            cout<<num<<endl;
        }
        return tf;
    }
};


// correct but runtime exceeds :
// class Solution {
// public:
//     vector<bool> prefixesDivBy5(vector<int>& A) {
//         vector<bool> tf;
//         int long num=0,sum=0,base=1;
//         int n=A.size();
        
//         for(int i=0;i<n;i++)
//         {
//             num=A[i]%10;
//             sum+=num*base;
//             base*=2;
//             if(sum%5==0)
//                 tf.push_back('true');
//             else
//                 tf.push_back(0);
//             cout<<sum<<" "<<i<<endl;
//         }
//         return tf;
//     }
// };
