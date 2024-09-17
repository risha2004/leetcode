class Solution {
public:
  void frequency(string str, unordered_map<string,int> &un)
  {
    stringstream s(str);
    string words;
    while (s >> words)
        un[words]++;
}
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        unordered_map<string,int> un;
        frequency(s1,un);
        frequency(s2,un);
        vector<string> answer;
        for(auto w: un)
        {
            if(w.second<2)
            {
                answer.push_back(w.first);
            }
        }
        return answer;
    }
};