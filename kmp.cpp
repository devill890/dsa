#include <bits/stdc++.h>
using namespace std;

void computeLPS(string pat, int M, int *lps) {
    int len = 0; // Length of the previous longest prefix suffix
    lps[0] = 0; // lps[0] is always 0
    int i = 1;

    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len-1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string pat, string txt) {
    int M = pat.length();
    int N = txt.length();

    int lps[M]; // Create lps[] that will hold the longest prefix suffix values for pattern

    computeLPS(pat, M, lps); // Preprocess the pattern (calculate lps[] array)

    int i = 0; // Index for txt[]
    int j = 0; // Index for pat[]

    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            cout << "Pattern found at index " << i-j << endl;
            j = lps[j-1];
        }

        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j-1];
            else
                i++;
        }
    }
}

int main() {
    string txt, pat;
    getline(cin, txt); // Get input for text
    getline(cin, pat); // Get input for pattern
    KMPSearch(pat, txt); // Call KMPSearch function with pattern and text inputs
    return 0;
}
