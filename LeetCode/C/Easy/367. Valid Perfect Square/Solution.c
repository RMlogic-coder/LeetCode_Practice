bool isPerfectSquare(int num) {
    int l = 1;
    int h = num / 2;

    while(l <= h) {
        int mid = l + (h - l) / 2;

        long long square = (long long)mid * mid;

        if(square == num) {
            return true;
        }
        else if(square < num) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }

    return num == 1;
}