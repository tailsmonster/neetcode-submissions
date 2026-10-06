class Solution {
public:
    unordered_map<char, int> createLetterCount(string str) {
        unordered_map<char, int> count;
        for (const char& c : str) {
            if (!count[c])
                count[c] = 1;
            else
                count[c]++;
        }
        return count;
    }
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sCount = createLetterCount(s);
        unordered_map<char, int> tCount = createLetterCount(t);
        return sCount == tCount;
    }
};
