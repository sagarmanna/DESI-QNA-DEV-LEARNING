int diagonalDifference(vector<vector<int>> arr) {
int row=arr.size();
int col=arr[0].size();
int lr=0,rl=0;

for(int i =0;i<row;i++ ){
    for(int j =0;j<arr[0].size();j++ ){
        
    if(i==j) lr+=arr[i][j];
    
    if(j==row-i-1) rl +=arr[i][j];
}
}
int ans=abs(lr-rl);
return ans;
}