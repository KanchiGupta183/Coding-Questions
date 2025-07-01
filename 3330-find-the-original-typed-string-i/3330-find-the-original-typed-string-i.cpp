class Solution {
public:
    int possibleStringCount(string word) {
        unordered_set<string> results;
        results.insert(word);  // original string (no mistake case)

        int n = word.length();
        for (int i = 0; i < n; ) {
            int j = i;
            // Count how many times word[i] repeats
            while (j < n && word[j] == word[i]) {
                j++;
            }
            int count = j - i;

            // Try removing 1 to count-1 characters
            for (int k = 1; k < count; ++k) {
                string newWord = word.substr(0, i) + word.substr(i + k);
                results.insert(newWord);
            }

            i = j; // move to next group
        }

        return results.size();
    }
};
