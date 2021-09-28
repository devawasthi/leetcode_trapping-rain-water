class Solution {
public:
    int trap(vector<int>& height) {
   int maxL,maxR;
        int n=height.size();
    int ans=0;
    if(n<=2) 
        return 0;
    for(int i=0;i<n;i++){
        int j=i-1;
        maxR= height[i];
        while(j >= 0){
            maxR= max(maxR,height[j]);
            j--;
        }
        j=i+1;
        maxL=height[i];
        while(j<n){
            maxL=max(maxL,height[j]);
            j++;
        }
        
        ans+=min(maxL,maxR)-height[i];
    }
    return ans;
}    
    };
