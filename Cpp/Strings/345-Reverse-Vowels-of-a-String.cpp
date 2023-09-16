class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            return true;
        else return false;
    }
    
    string reverseVowels(string s) {
        int start =0;
        int end = s.size()-1;
        
        while(start<end){
            // Advance start pointer until it points to a consonant or reaches end.
            while(start<s.size() && !isvowel(s[start]) ){
                start++;
            }
            
            // Decrement the end pointer until it points to consonant and points to end
            while( end>=0 && !isvowel(s[end]) ){
                end--;
            }
            // if start<end swap, swap vowels and update the pointer
            if(start<end){
                swap(s[start++],s[end--]);
            }
        }
        return s;
    }
};

//2)
class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            return true;
        else return false;
    }
    
    string reverseVowels(string s) {
        int start =0;
        int end = s.size()-1;
        
        while(start<end){
            if(isvowel(s[start]) && isvowel(s[end])){
                swap(s[start++],s[end--]);
            }
            if(!isvowel(s[start]) ){
                start++;
            }
            if(!isvowel(s[end]) ){
                end--;
            }
        }
        return s;
    }
};

//3)
class Solution {
 public:
  string reverseVowels(string s) {
    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      while (l < r && !isVowel(s[l]))
        ++l;
      while (l < r && !isVowel(s[r]))
        --r;
      swap(s[l++], s[r--]);
    }

    return s;
  }

 private:
  bool isVowel(char c) {
    static constexpr string_view kVowels = "aeiouAEIOU";
    return kVowels.find(c) != string_view::npos;
  }
};