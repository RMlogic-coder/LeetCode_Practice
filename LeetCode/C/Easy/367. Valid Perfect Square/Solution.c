bool isPerfectSquare(int num) {
    for(int i=2;i<num/2;i++){
        if(i*i==num){
            return true;
        }
    }
    return false;
}