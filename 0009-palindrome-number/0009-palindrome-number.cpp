class Solution {
public:


    bool isPalindrome(int x) {

  if(x<0) return false;
    long long rev = 0;
        long long  num = x;

        while(num != 0){
        int ld = num % 10;
        rev = rev * 10 + ld;
        num = num/10;
        }

      if(rev == x) return true ;
      else{
        return false;
      }
    }
};