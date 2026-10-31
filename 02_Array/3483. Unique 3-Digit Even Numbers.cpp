class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int num=0;
        unordered_set<int> st;
        for (int i=0; i<digits.size(); i++){
             if(digits[i]!=0){
                for (int j =0 ; j<digits.size(); j++){
                    for (int k=0; k < digits.size();k++){
                        if(i != j && j != k && i != k){
                            num=digits[i]*100 + digits[j]*10 + digits[k];
                            if(num%2==0) st.insert(num);   
                        }
                       
                    }
                }
             }
                
        }

        return st.size();
    }
};