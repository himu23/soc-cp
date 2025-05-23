//binary algos
//binary search
int l=0, r=n-1;
while(l<=r){
    int m=(l+r)/2;
    if(a[m]==target){
        return m;
    }
    else if(a[m]<target){
        l=m+1;
    }
    else{
        r=m-1;
    }
}


//lower bound
    int l=0,r=45000; //not size vec.size()-1xit
        while(l<r){
            int m=(l+r)/2;
            if(triangle[m]<=n){
                l=m+1;
            }
            else{
                r=m;
            }
        }
