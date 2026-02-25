#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int count;
    void backtrack(int pos, int start, int n) {
        if (pos == n) {
            count++;
            return;
        }
        
        for (int i = start; i < 5; i++) {
            backtrack(pos + 1, i, n);
        }
    }
    
    int countVowelStrings(int n) {
        backtrack(0, 0, n);
        return count;
    }
};
int main(){
    Solution obj;
    int input=3;
    int output = obj.countVowelStrings(input);
    cout << "Output: " << output << endl;
    return 0;
}