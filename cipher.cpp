#include <bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        getline(cin, s);
        int k;
        cin >> k;
        int temp = k;
        for (int i = 0; i < s.length(); i++) {
                if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
                        if (s[i] >= 65 && s[i] <= 90) {
                                k = temp % 26;
                                if (s[i] > 90 - k)
                                        s[i] += k - 26;
                                else
                                        s[i] += k;
                        } else if (s[i] >= 48 && s[i] <= 57) {
                                k = temp % 10;
                                if (s[i] > 57 - k) {
                                        s[i] += k - 10;
                                }
 
                                else
                                        s[i] += k;
 
                        } else {
                                k = temp % 26;
                                if (s[i] > 122 - k) {
                                        s[i] += k - 26;
                                } else {
                                        s[i] += k;
                                }
                        }
                }
        }
        cout <<s;
        return 0;
}