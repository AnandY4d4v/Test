#include <bits/stdc++.h>
using namespace std;

 void print(vector<int>&vect){
    vect[3]=50;
    for(int i=0;i<vect.size();i++ ) cout<<vect[i]<<" ";
 }  


int main(){
    vector<int>nums;
    int n=4;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<<"ptinying->";

    print(nums);

    cout<<endl;

    for(int i=0;i<nums.size();i++ ) cout<<nums[i]<<" ";
    return 0;
}