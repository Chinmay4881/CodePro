class Solution {
public:
    string addBinary(string a, string b) {
       const int size=64;
       bitset<size>b1(a);
       bitset<size>b2(b);
       bitset<size>sum=b1.to_ulong()+b2.to_ulong();
        string finala= sum.to_string();
       size_t point=finala.find('1');
        if(point<finala.size()){
         finala=finala.substr(point);
       }
       else{
        return "0";
       }
       return finala;
    }
};
