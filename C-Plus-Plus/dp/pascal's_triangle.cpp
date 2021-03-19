#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    long int dp[n][n];
    cout << "The Pascal's Triangle is : " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i <= row; i++)
        {
            if (row == i || i == 0)
                dp[row][i] = 1; //Initialize first and last element of ach row with 1
            else
                dp[row][i] = dp[row - 1][i - 1] + dp[row - 1][i]; //Other values are sum of values just above and left of above
            cout << dp[row][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*Piyush Kumar
   Time Complexity - O(n^2)
   Space Complexity - O(n^2) auxilaary space
   Sample Input - 4 
   Sample Output - 
       1
      1 1
     1 2 1
    1 3 3 1 */