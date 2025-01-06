int birthdayCakeCandles(vector<int> a) {
int maxi =*max_element(a.begin(),a.end());
int cnt =0;
for(int i =0;i<a.size();i++){
    if(a[i]==maxi) cnt++;
}
return cnt++;
}