class Solution {
public:
    int jumpFloor(int n) {
        int n1 = 0, n2 =1;
        if(n<=1) return n;
        int result = 0;
        for(int i = 1; i<=n;i++)
        {
            result = n1 +n2;
            n1 = n2;
            n2 = result;
            
        }
        return result;
    }
};