class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> abc;
        int i=0,k=1;
        while(n>=k)
        {
            if((k%3==0)&&(k%5==0))
                abc.push_back("FizzBuzz");
            else if((k%3)==0)
                abc.push_back("Fizz");
            else if((k%5)==0)
                abc.push_back("Buzz");
            else 
                abc.push_back(to_string(k));
            k++;     
        }
        return abc;
    }
};
