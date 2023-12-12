#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

 void subArrayExists(int arr[], int n)
    {
        //CALCULATING PREFIX SUM
        vector<int>prefixsum;
        int sum=0;
        cout<<"prefix sum->";
        for (int i=0; i<n; ++i){
            sum+=arr[i];
            prefixsum.push_back(sum);
            cout<<sum<<" ";
        }
        cout<<endl;

        //Mapping
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[prefixsum[i]]++;
        }

        int si=0;
        int li=0;
        //To check if start index is updated
        //if start will not be updated then we will update or else we will update last
        bool sic=false;

        cout<<"Mappedvalue->";
        for(int i=0;i<n;i++){
            //Agar 0 mile toh  last index update
            if(prefixsum[i]==0) {
                li=i;
            }
            cout<<m[prefixsum[i]]<<" ";
            if(m[prefixsum[i]]==2){
                if(sic==false && m[prefixsum[i]]==2){ 
                si=i+1;
                sic=true;
                }
                else{
                    li=i;
                }
            }
        }
        cout<<endl;
        cout<<"si->"<<si<<" , "<<"li->"<<li;
        cout<<endl;
        cout<<"Subarray->";
        for( si;si<=li;si++) cout<<arr[si]<<" ";
    }


int main(){
    int n=5;
    int arr[13]={1,2,3,-1,-2};
   subArrayExists(arr, n);
    return 0;
}