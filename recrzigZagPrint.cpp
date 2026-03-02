#include<iostream>
using namespace std;
class Solution {
    public:
        void printZigZag( int n){
            if (n==0){
                return;
            }
            cout<<"Pre "<<n<<endl;
            printZigZag(n-1);
            cout<<"In "<<n<<endl;
            printZigZag(n-1);
            cout<<"Post "<<n<<endl;
        }
};
int main(){
    Solution obj;
    obj.printZigZag(2);
    return 0;
}