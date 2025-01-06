

void miniMaxSum(vector<int> arr) {

long long maxi=0, mini= LONG_LONG_MAX;
for(int i =0;i <5;i++){
    long long sum=0;
    for(int j =0; j<5;j++){
        if(i==j)
        continue;
        sum+=arr[j];
    }
    
    maxi=max(maxi,sum);
    mini=min(mini,sum);
}

cout<<mini<<" "<<maxi;


}






