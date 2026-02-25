#include<iostream>
using namespace std;
class Solution {
    public: 
        int factorial(int n){
            if (n==1){
                return n;
            }
            return n*factorial(n-1);
        }
};
int main(){
    Solution obj;
    int input;
    cout<<"Enter the number: ";
    cin>>input;
    int output=obj.factorial(input);
    cout<<"Factorial of "<<input<<" is :"<<output<<endl;
    return 0;
}