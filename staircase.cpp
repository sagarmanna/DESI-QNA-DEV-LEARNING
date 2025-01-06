void staircase(int n) {
    

for(int i=0;i<n;i++){
    

        int space=n-1-i;
      for(int j =0;j<space;j++) cout<<" ";
      for(int j=0;j<=i;j++)cout<<"#";
      cout<<endl;
    }
    }
