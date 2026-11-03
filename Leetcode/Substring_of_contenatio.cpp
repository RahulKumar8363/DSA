// Example 1:

// Input: s = "barfoothefoobarman", words = ["foo","bar"]

// Output: [0,9]

// Explanation:

// The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"] which is a permutation of words.
// The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"] which is a permutation of words.

// Example 2:

// Input: s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]

// Output: []

// Explanation:

// There is no concatenated substring.

// Example 3:

// Input: s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]

// Output: [6,9,12]

// Explanation:

// The substring starting at 6 is "foobarthe". It is the concatenation of ["foo","bar","the"].
// The substring starting at 9 is "barthefoo". It is the concatenation of ["bar","the","foo"].
// The substring starting at 12 is "thefoobar". It is the concatenation of ["the","foo","bar"].

 
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findSubstring(std::string s, std::vector<std::string>& words) {
        std::vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].length();
        int numWords = words.size();
        int totalLen = wordLen * numWords;

        if (s.length() < totalLen) return result;

        std::unordered_map<std::string, int> wordCount;
        for (const std::string& word : words) {
            wordCount[word]++;
        }

        for (int i = 0; i < wordLen; ++i) {
            int left = i, right = i;
            std::unordered_map<std::string, int> seenWords;
            int count = 0;

            while (right + wordLen <= s.length()) {
                std::string sub = s.substr(right, wordLen);
                right += wordLen;

                if (wordCount.find(sub) != wordCount.end()) {
                    seenWords[sub]++;
                    count++;

                    while (seenWords[sub] > wordCount[sub]) {
                        std::string leftWord = s.substr(left, wordLen);
                        seenWords[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if (count == numWords) {
                        result.push_back(left);
                    }
                } else {
                    seenWords.clear();
                    count = 0;
                    left = right;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    std::vector<std::string> words1 = {"foo", "bar"};
    std::vector<int> res1 = sol.findSubstring("barfoothefoobarman", words1);
    std::cout << "Test 1 Output: [";
    for (size_t i = 0; i < res1.size(); ++i) {
        std::cout << res1[i] << (i + 1 < res1.size() ? ", " : "");
    }
    std::cout << "]\n"; // Expected: [0, 9]

    // Test Case 2
    std::vector<std::string> words2 = {"word", "good", "best", "word"};
    std::vector<int> res2 = sol.findSubstring("wordgoodgoodgoodbestword", words2);
    std::cout << "Test 2 Output: [";
    for (size_t i = 0; i < res2.size(); ++i) {
        std::cout << res2[i] << (i + 1 < res2.size() ? ", " : "");
    }
    std::cout << "]\n"; // Expected: []

    // Test Case 3
    std::vector<std::string> words3 = {"bar", "foo", "the"};
    std::vector<int> res3 = sol.findSubstring("barfoofoobarthefoobarman", words3);
    std::cout << "Test 3 Output: [";
    for (size_t i = 0; i < res3.size(); ++i) {
        std::cout << res3[i] << (i + 1 < res3.size() ? ", " : "");
    }
    std::cout << "]\n"; // Expected: [6, 9, 12]

    return 0;
}