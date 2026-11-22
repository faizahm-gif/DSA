
class Solution {
    public int strStr(String haystack, String needle) {

        for (int i = 0; i <= haystack.length() - needle.length(); i++) {

            int j = 0;

            // Compare characters of needle with haystack
            while (j < needle.length() &&
                   haystack.charAt(i + j) == needle.charAt(j)) {
                j++;
            }

            // If all characters match
            if (j == needle.length()) {
                return i;
            }
        }

        return -1;
    }
}
