
#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "112358";
    int n = num.size();

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string s1 = num.substr(0, i);
            string s2 = num.substr(i, j - i);
            string rest = num.substr(j);
            if (s1.size() > 1 && s1[0] == '0') continue;
            if (s2.size() > 1 && s2[0] == '0') continue;
            // cout << s1 << " , " << s2 << " , " << rest << endl;
            long long a=stoll(s1);
            long long b=stoll(s2);
            long long sum=a+b;
            // cout<<a<<" + "<<b<<" = "<<sum<< " | rest "<<rest<<endl;
            string sumStr= to_string(sum);
            if (rest.substr(0,sumStr.size())==sumStr){
                cout << "MATCH -> " << s1 << ", " << s2 << ", " << sumStr << endl;
            }
        }
    }
    return 0;
}
