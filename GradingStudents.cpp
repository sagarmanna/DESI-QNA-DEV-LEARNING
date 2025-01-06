#include<iostream>
#include<vector>
using namespace std;
int main(){

// vector<int>arr;
// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;
// arr.push_back(4);
// for(int i =0;i<arr.size();i++){
// cout<<arr[i];
// }
// cout<<endl;

// arr.pop_back();
// for(int i =0;i<arr.size();i++){
// cout<<arr[i];
// }
// cout<<endl;
// }

// probvlem solving
// find unique element 
// { 1, 2, 3  4, 5}
// every element occurs twice 

// int arr[]={1,2,3,4,5};
// int sizea=6;
// int brr[]={5,6,7,8,9};
// int sizeb=5;
// vector<int>ans;
// for(int i=0;i<sizea;i++){
//     ans.push_back(arr[i]);

// }
// for(int i=0;i<sizeb;i++){
//     ans.push_back(brr[i]);

// }


vector<int>arr{1,2,3,4,6,8};
vector<int>brr{3,49,4,10};

vector<int>ans;
for(int i=0;i<arr.size();i++){
    int element=arr[i];
    for(int j=0;j<brr.size();j++){
        if(element==brr[j]){
            ans.push_back(element);
        }
    }
}
// print ans:
for(auto value:ans){
    cout<<value<<" ";
}
}