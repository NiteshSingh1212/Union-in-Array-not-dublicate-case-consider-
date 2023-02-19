#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> brr(m);
    for(int i=0;i<arr.size();i++){
     cin>>arr[i];
    }
      for(int j=0;j<brr.size();j++){
     cin>>brr[j];
    }
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
         for(int j=0;j<brr.size();j++){
    if(arr[i]==brr[j]){
        ans.push_back(arr[i]);
    }
}
 
    }
  
for(auto value:ans){
    cout<<value;
}
}