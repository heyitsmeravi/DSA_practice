#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void printArray(vector<int>arr,int idx){
            if (idx==arr.size()){
                return;
            }
            cout<<arr[idx]<<endl;
            printArray(arr,idx+1);
        }
};
int main(){
    Solution obj;
    obj.printArray({1,2,3,4,7,5,6},0);
    return 0;
}