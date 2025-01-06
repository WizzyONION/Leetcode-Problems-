class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> a;

        while(n!= 1 && a.find(n)== a.end()){
            a.insert(n);
            int sum =0;

            while(n>0){
                int digit = n %10;
                sum = sum + digit * digit;
                n = n/10;
            }
            n = sum;
        }
        return n == 1;
    }
};
