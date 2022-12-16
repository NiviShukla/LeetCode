class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0) return a;

        int sum = a ^ b;
        //using XOR function to check for carry
        int carry = (unsigned int)(a & b) << 1;
        //using AND function to take the carry and left shift by 1
        return getSum(sum,carry);
        // recursive function to check till carry is zero
    }
};
