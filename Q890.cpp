class Solution {
public:
    string pat(string word)
    {
        char c='a';
        map<char,int> m;
        for(char i:word)
        {
            if(m.count(i)==0)
                m[i]=c++;
        }
        for(int i=0;i<word.size();i++)
        {
            word[i]=m[word[i]];
        }
        return word;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> a;
        for(string &w : words)
        {
            if(pat(w)==pat(pattern))
                a.push_back(w);
        }       
        return a;
    }
};

// The helper function makes any word into a generic pattern.

// We go through a word and store an id(starting at 97) for each different character (if not in map we increase id by 1 and add it in)
// Then we change this word to a pattern based on the ids(id starts at ascii code 97 = 'a') ** qqrreesstt becomes aabbccddee. rrttxxyyzz would also be aabbccddee. **
// In main solution function

// First we take the pattern and convert it into the generic pattern.
// Now in our solution function we go through each word in the vector of strings and convert each one to pattern using above steps and compare them to the pattern given in the argument. If they match we add it to solution vector.
