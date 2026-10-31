class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        
        bool canMakeAllEven = true;
        for (int i = 0; i < n; i++) {
            bool currentCanBeEven = false;
            
           
            if (nums1[i] % 2 == 0) {
                currentCanBeEven = true;
            } 
            
            else {
                for (int j = 0; j < n; j++) {
                    if (i != j && (nums1[i] - nums1[j]) % 2 == 0) {
                        currentCanBeEven = true;
                        break;
                    }
                }
            }
            
            if (!currentCanBeEven) {
                canMakeAllEven = false;
                break;
            }
        }
        
        bool canMakeAllOdd = true;
        for (int i = 0; i < n; i++) {
            bool currentCanBeOdd = false;
            
    
            if (nums1[i] % 2 != 0) {
                currentCanBeOdd = true;
            } 
          
            else {
                for (int j = 0; j < n; j++) {
                    if (i != j && (nums1[i] - nums1[j]) % 2 != 0) {
                        currentCanBeOdd = true;
                        break;
                    }
                }
            }
            
            if (!currentCanBeOdd) {
                canMakeAllOdd = false;
                break;
            }
        }
        
        return canMakeAllEven || canMakeAllOdd;
    }
};