class Solution {
public:
    long long sum(long long n){
        long long c=n*((n+1)/2);
        long long c2=(n/2)*(n+1);
        if(c>c2)
        return c;
        return c2;
    }
    int arrangeCoins(long long n) {
        long long start=1,end=sqrt(2*n);
        int res{0};
        while(start<=end){
            int middle=start+(end-start)/2;
            long long calc=sum(middle);
            long long calc2=sum(middle+1);
            if(calc<=n)
            {
                res=middle;
                start=middle+1;
            }

            else
            end= middle -1;

        }
        return res;
    }
};