#include<iostream>
using namespace std;
class Solution {
    public: 
        void printNumbers(int n){
            if (n==0){
                return ;
            }else{
                cout<<n<<endl;
                printNumbers(n-1);
                cout<<n<<endl;
            }
        }
};
int main(){
    Solution obj;
    int input=5;
    obj.printNumbers(input);
    return 0;
}