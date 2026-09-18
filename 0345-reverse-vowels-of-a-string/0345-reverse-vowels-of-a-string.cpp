class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {

            if ((tolower(s[left])=='a'||tolower(s[left])=='e'||tolower(s[left])=='i'||tolower(s[left])=='o'||tolower(s[left])=='u') &&
                (tolower(s[right])=='a'||tolower(s[right])=='e'||tolower(s[right])=='i'||tolower(s[right])=='o'||tolower(s[right])=='u')) {

                swap(s[left], s[right]);
                left++;
                right--;
            }

            else if (tolower(s[left])=='a'||tolower(s[left])=='e'||tolower(s[left])=='i'||tolower(s[left])=='o'||tolower(s[left])=='u') {
                right--;
            }

            else {
                left++;
            }
        }

        return s;
    }
};