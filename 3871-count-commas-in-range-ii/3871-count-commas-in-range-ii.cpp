//read till end for dry run and complexities[https://chatgpt.com/share/6aa0b07b-21dc-83ee-b7f5-6019f52e2f9a] // IGNORE THE REPOSITORY DELETION PART

class Solution{
    public:
    long long countCommas(long long n){
        long long ans = 0;
    for(long long i = 1000; i <= n; i *= 1000){
     ans += n - i + 1;
    }

    return ans;
    }
};

