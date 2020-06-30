class Solution {
public:
    bool isHappy(int n) {
        int num=n;
        int temp;
        int sum=0;
        set <int> s;
        while(1) {
            sum=0;
            while(n>0) {
                temp=n%10;
                sum=sum+(temp*temp);
                n=n/10;
            }
            if(sum==1) {
                return true;
            }
            if(s.find(sum)==s.end()) {
                s.insert(sum);
            }
            else {
                return false;
            }
            n=sum;
        }
    }
};
