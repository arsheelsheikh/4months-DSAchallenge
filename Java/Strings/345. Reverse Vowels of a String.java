class Solution {
    private boolean isVowel(char ch) {
        ch = Character.toLowerCase(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    public String reverseVowels(String s) {
        char[] charArray = s.toCharArray();
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (isVowel(charArray[start]) && isVowel(charArray[end])) {
                char temp = charArray[start];
                charArray[start] = charArray[end];
                charArray[end] = temp;
                start++;
                end--;
            }
            if (!isVowel(charArray[start])) {
                start++;
            }
            if (!isVowel(charArray[end])) {
                end--;
            }
        }

        return new String(charArray);
    }
}
