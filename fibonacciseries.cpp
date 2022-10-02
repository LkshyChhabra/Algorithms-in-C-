//enter the number 'n', till which Fibonacci series will be printed out in the terminal...
//this code returns/prints Fibonacci series upto the n'th(inputted by user) term in the series...

#include <iostream>
using namespace std;
//fiboo temp
    int path(int n,vector<int> &dp){
        
        if(n<=1)return n;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=path(n-1,dp)+path(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return path(n,dp);
    }

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}
