 int guess(int num);
int guessNumber(int n) {
    int l = 1;
    int h = n;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        int result = guess(mid);
        if (result == 0)
            return mid;
        else if (result == 1)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}