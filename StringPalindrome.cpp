
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether string
// is palindrome
string isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {

        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return "String Is Not Palindrome";
        }
    }
    // Return "Yes"
    return "String Is Palindrome";
}

// Driver Code
int main()
{
    string S ;
    cin>>S;
    cout << isPalindrome(S);

    return 0;
}
