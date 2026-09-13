class Solution {
private:
vector<int> findprefixMax(vector<int> heights,int n){
    vector<int> prefixMax(n);
    prefixMax[0] = heights[0];
    for(int i = 1;i < n; i++){
        prefixMax[i] = max(prefixMax[i-1],heights[i]);
    }
    return prefixMax;
}
vector<int> findsuffixMax(vector<int> heights,int n){
    vector<int> suffixMax(n);
    suffixMax[n-1] = heights[n-1];
    for(int i = n-2;i >= 0; i--){
        suffixMax[i] = max(suffixMax[i+1],heights[i]);
    }
    return suffixMax;
}
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax = findprefixMax(height,n);
        vector<int> rightMax = findsuffixMax(height,n);
        int total = 0;
        for(int i = 0; i < n ; i++){
            if(leftMax[i] > height[i] && rightMax[i] > height[i]){
                total += (min(leftMax[i],rightMax[i])) - height[i];
            }
        }
        return total;
    }
};