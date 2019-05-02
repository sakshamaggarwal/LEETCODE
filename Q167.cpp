class Solution{
public:
    vector<int> twoSum(vector<int>& numbers,int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        
        while(numbers[i]+numbers[j]!=target)
        {
           if(numbers[i]+numbers[j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }   
        }
        return {i+1,j+1};
    }
};


// for(i=0;i<n;i++)
        // {
        //     for(j=i+1;j<n;j++)
        //     {
        //         if(numbers[i]+numbers[j]==target)
        //         {
        //             return {i+1,j+1};
        //         }
        //     }
        // }
