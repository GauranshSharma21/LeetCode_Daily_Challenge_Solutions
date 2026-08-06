//string approach ->
//complexities[https://chatgpt.com/share/6a73dcab-e390-83ee-a0d9-67ace21fc5bc]

//REVISE ITS COMPLEXITY ANALYSIS
class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int product = 1;

            string s = to_string(n);
            for(char x : s) product *= x - '0';

            if(product % t == 0) return n;
            n++; 
        }
    }
};