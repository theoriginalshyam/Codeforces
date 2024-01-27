ll binarysearch(ll start, ll end, ll number)
{
    ll mid,ans = 0;
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == number) {
            ans = mid;
            return ans;
        }
        if (mid * mid < number) {
            start = mid + 1;
            ans = mid;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}
