class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n = s.length();
        vector<int>freq(26,0);
        for(char ch: s){
            int idx = ch-'a';
            freq[idx] ++;
        }
        int maxFreq =0;
        for(int i =0;i<26;i++){
            maxFreq=max(freq[i],maxFreq);
        }
        for(int i=0;i<26;i++){
            if(freq[i]==maxFreq)
                return (char)(i+'a');
        } 
        return s [0];
    }
};