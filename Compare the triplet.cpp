vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int size=a.size();
    int i=0;
    int cnt1=0,cnt2=0;
    while(i<size){
       if(a[i]>b[i]) cnt1++;
       else if(a[i]<b[i])cnt2++;
       i++;
    }
        vector<int>ans;
        ans.push_back(cnt1);
        ans.push_back(cnt2);
        return ans;
}