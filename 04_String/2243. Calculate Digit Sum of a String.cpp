class Solution {
public:
    string sum_string(const string& s) {
        int sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        return to_string(sum);
    }
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string next_s = "";
            for (int i = 0; i < s.length(); i += k) {
                string chunk = s.substr(i, k);
                next_s += sum_string(chunk);
            }
            s = next_s;
        }
        return s;
    
}
}
;