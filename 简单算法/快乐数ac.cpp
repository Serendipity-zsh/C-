class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> sett;
        while(n!=1)
        {
            if(sett.find(n)!=sett.end())
                return false;
            sett.insert(n);
            int tmp=0;
            while(n)
            {
                tmp+=((n%10)*(n%10));
                n/=10;
            }
            n=tmp;
        }
        return true;
    }
};


