class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int ans=0;
        int buy=prices[0];
        for(int i=0;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else{
                ans+=prices[i]-buy;
                while(i<n-1){
                    if(prices[i]<prices[i+1]){
                        buy=prices[i];
                        break;
                    }
                    else
                    i++;
                }
            }
        }
        return ans;
    }
};
