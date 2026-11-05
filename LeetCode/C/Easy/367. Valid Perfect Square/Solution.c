bool isPerfectSquare(int num) {
    int l=2;
    int h=num/2;
    while(l<h){
        int mid=l+(h-l)/2;
        
        if(mid*mid<num){
            l=mid+1;
        }
        else {
            h=mid;
        }
        if(mid*mid==num) return true;
    }
    return false;
}