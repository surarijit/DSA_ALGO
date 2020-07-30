// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <iostream>
#include <map>
using namespace std;

// Function to print all distinct palindrome sub-strings of s
void palindromeSubStrs(string s)
{
     map<string, int> m;
    int n = s.size();


    int dp[2][n + 1];

   
    s = "[" + s + "]";

    for (int j = 0; j <= 1; j++)
    {
        int rj = 0; 
        dp[j][0] = 0;

        int i = 1;
        while (i <= n)
        {
            
            while (s[i - rj - 1] == s[i + j + rj])
                rj++;
            dp[j][i] = rj;
            int k = 1;
            while ((dp[j][i - k] != rj - k) && (k < rj))
            {
                dp[j][i + k] = min(dp[j][i - k], rj - k);
                k++;
            }
            rj = max(rj - k, 0);
            i += k;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        string ss = "";
        ss += s[i];
        m[ss] = 1;
        for (int r = 1; r <= dp[1][i]; r++)
        {
            ss = s[i - r] + ss + s[i + r];
            m[ss] = 1;
        }
        ss = "";
        for (int r = 1; r <= dp[0][i]; r++)
        {
            int j = s[i - r];
            ss = s[j] +ss+ s[i + r - 1];
            m[ss] = 1;
        }
       
    }

    cout<<m.size()<<endl
}

// Driver program
int main()
{
    cout<<palindromeSubStrs("mokkori")<<endl;
    return 0;
}