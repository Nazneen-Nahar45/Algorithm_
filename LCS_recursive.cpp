#include <iostream>
#include <algorithm>

using namespace std;

int lcsRecursive(string s1, string s2, int m, int n) {
    // Base case: If either string is empty, LCS length is 0
    if (m == 0 || n == 0) {
        return 0;
    }

    // If the last characters of both strings match
    if (s1[m - 1] == s2[n - 1]) {
        return 1 + lcsRecursive(s1, s2, m - 1, n - 1);
    } else {
        // Return the maximum of two cases:
        // 1. Exclude the last character of s1 and compare with s2
        // 2. Exclude the last character of s2 and compare with s1
        return max(lcsRecursive(s1, s2, m - 1, n), lcsRecursive(s1, s2, m, n - 1));
    }
}

int main() {
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";

    int m = s1.length();
    int n = s2.length();

    int lcsLength = lcsRecursive(s1, s2, m, n);
    cout << "Length of Longest Common Subsequence: " << lcsLength << endl;

    return 0;
}
