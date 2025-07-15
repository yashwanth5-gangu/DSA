class Solution {
public:
    bool func(char& ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    bool isValid(string word) {
        bool char1 = false;
        bool digit = false;
        bool vowel = false;
        bool consonant = false;
        int n = word.size();
        if (n >= 3) {
            char1 = true;

        } else {
            char1 = false;
        }
        for (int i = 0; i < n; i++) {
            if (isalpha(word[i])) {

                if (func(word[i])) {
                    vowel = true;

                } else {
                    consonant = true;
                }
            }
            if (!isalpha(word[i]) && !isdigit(word[i])){
            return false;
        }

            if (isdigit(word[i])) {
                digit = true;
            }
           
        }

        return (char1 && vowel && consonant);
    }
};