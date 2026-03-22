#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int lastOccurence(vector<int>arr,int target,int idx){
            if (idx==arr.size()) return -1;
            int liisa=lastOccurence(arr,target,idx+1);
            if (liisa==-1){
                if(arr[idx]==target){
                    return idx;
                }else{
                    return -1;
                }
            }else{
                return liisa;
            }
        }
};
int main(){
    Solution obj;
    int target=1;
    int idx=0;
    vector<int>arr={1,2,3,2,1,2,5,8,3};
    int sol=obj.lastOccurence(arr,target,idx);
    cout<<"the last occurence of "<<target <<" is at " <<sol<<" index" <<endl;
}