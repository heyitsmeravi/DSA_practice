#include <iostream>
#include<stack>
#include <string>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<string> stringStack;
        stack <int> numStack;
        int currNumber=0;
        string currentString="";
        for (int i=0;i<s.length();i++ ){
            if (s[i]-'0'>=0 && s[i]-'0'<=9){
                currNumber = currNumber*10 + (s[i]-'0');
            }else if (s[i]=='['){
                numStack.push(currNumber);
                stringStack.push(currentString);
                currentString="";
                currNumber=0;
            }else if (s[i]==']'){
                int repeat=numStack.top();
                numStack.pop();
                string prevString= stringStack.top();
                stringStack.pop();
                string temp="";
                for (int j=0;j<repeat;j++){
                    temp+=currentString;
                }
                currentString = prevString +temp;
            }
            else{
                currentString+=s[i];
            }
            
        }
        return currentString;
    }
};
int main(){
    Solution obj;
    string input="3[a2[c]]";
    string output = obj.decodeString(input);
    cout << "Output: " << output << endl;
    return 0;
}