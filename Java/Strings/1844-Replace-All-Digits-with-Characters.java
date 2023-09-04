public class Solution {
    public String replaceDigits(String s) {
        // strings in Java are immutable
        char[] charArray = s.toCharArray(); 
        int n = s.length();
        
        for (int i = 1; i < n; i += 2) {
            charArray[i] = (char)(charArray[i - 1] + (charArray[i] - '0'));
        }
        
        return new String(charArray);
    }
}
