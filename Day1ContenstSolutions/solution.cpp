class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> arr;
        long i=1;
        while(n>0){
            int digit=n%10;
            if(digit>0){
                arr.push_back(digit*i);}
                n=n/10;
                i=i*10;
            
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};