class Solution {
public:
    int kthFactor(int n, int k) {
        
        int i=0;
        vector<int>yashi;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
              yashi.push_back(i);  
            }
            
        }
        int a=yashi.size();
        if(k<=a)
        {
        return yashi[k-1];
        }
        else
        {
            return -1;
        }
        
    }
};
