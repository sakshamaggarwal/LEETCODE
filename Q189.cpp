class Solution {
public:
    
    void prt(vector<int>& nums,int n)
{
    for(int i=0;i<n;i++)
        cout<<nums[i];
    //return 0;
}

    
    void reverse(vector<int>& nums,int start,int end)
{
    while(start<end)
    {
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
    
    //return 0;

}
    void rotate(vector<int>& nums,int k) {
     
       int n;
    // cout<<"Enter the size ofthe aaray: ";
    // cin>>n;
    
   // cout<<"\nEnter the elements of the Vector: ";
  //       for(int i=0;i<n;i++)
  //       {
  //           cin>>nums[i];
  //       }
  //   //   cout<<"\nEnter the position to be shift by: ";
  // //  cin>>k;
        n=nums.size();
        
    // cout<<"\nOriginal array:";
    // for(int i=0;i<nums.size();i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
        if(k>n){
            k=k%n;
        }
            
    reverse(nums,0,n);
    reverse(nums,0,k);
    reverse(nums,k,n);

        
        
//    cout<<"\nArray after shift\n";
    prt(nums,n);

    //return 0;
        
    }
};

