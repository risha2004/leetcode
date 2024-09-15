class Solution {
public:
    int findTheLongestSubstring(string s) {
      
          char vow[26];
        
        memset(vow, -1, 26);
        vow[0]=0, vow['e'-'a']=1, vow['i'-'a']=2, vow['o'-'a']=3, vow['u'-'a']=4;
        const int n=s.size();
    
        int f_seen[32];
        memset(f_seen, -1, sizeof(f_seen));
        int len=0;
        f_seen[0]=0; 
        char current=0;
        for(int i=0; i<n; i++){
            const char x=vow[s[i]-'a'];
            current^=(x==-1?0:(1<<x));
            if (f_seen[current]==-1) f_seen[current]=i+1;
            len=max(len, i+1-f_seen[current]);
        }
        return len;
    }
             
        
        
        
    
};