#include<iostream>
using namespace std;
int multiply( int a, int b){
    if (b==0) return 0;
    return a+multiply(a,b-1);
}
int main(){
    int c=multiply(4,5);
    cout<<c<<endl;
    return 0;
}