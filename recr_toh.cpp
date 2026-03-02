#include<iostream>
using namespace std;
class Solution {
    public:
        void recr_toh(int n,char src, char des, char hel){
            if (n==0) return ;
            recr_toh(n-1,src,hel,des);
            cout<<"["<<src<<"->"<<des<<"]"<<endl;
            recr_toh(n-1,hel,des,src);
        }
};
int main(){
    Solution obj;
    obj.recr_toh(4,'A','B','C');
    return 0;
}