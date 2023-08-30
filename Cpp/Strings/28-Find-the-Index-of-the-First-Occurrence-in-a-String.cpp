class Solution {
 public:
  int strStr(string haystack, string needle) {
    const int m = haystack.length();
    const int n = needle.length();

    //runs double for loop, (i < m - (n - 1))
    for (int i = 0; i < m - n + 1; i++)
    // Check if the substring of 'haystack' starting from the current position 'i'
    // and having a length of 'n' (same as the length of 'needle', i.e. 3 in eg-1) is equal to 'needle'.
      if (haystack.substr(i, n) == needle)
        return i;

    return -1;
  }
};
