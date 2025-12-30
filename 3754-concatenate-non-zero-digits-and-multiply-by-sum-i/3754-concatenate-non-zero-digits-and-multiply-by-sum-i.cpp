class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0;
        long long place = 1;
        long long temp = n;
    while (temp != 0) {
            int r = temp % 10;
        if (r != 0) {
            num += r * place;
                place *= 10;
            }
            temp /= 10;}
        long long nums = num;
        long long s = 0;

        while (num != 0) {
            s += num % 10;
            num /= 10;}
        return nums * s;
    }
};
