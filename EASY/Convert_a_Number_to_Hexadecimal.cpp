class Solution {
public:
    string toHex(int num) {
    string h = "";
    int s = 0;
    if (num < 0)
        num = (num & INT_MAX), s = 1;
    do {
        int d = num % 16;
        if (s && h.size() == 7)
            d += 8, s = 0;
        char ch = (d > 9) ? 'a' + d - 10 : ch = '0' + d;
        h = ch + h;
        num /= 16;
    } while (s || num);
    return h;
}
};