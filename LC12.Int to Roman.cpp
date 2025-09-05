class Solution {
public:
    string intToRoman(int num) {
        
      //  string intToRoman(int num) {
    // value->symbol pairs in descending order
    const vector<pair<int,string>> vals = {
        {1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},
        {100,"C"},{90,"XC"},{50,"L"},{40,"XL"},
        {10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
    };

    string res;
    for (const auto &p : vals) {
        while (num >= p.first) {
            res += p.second;
            num -= p.first;
        }
    }
    return res;

    }
};
