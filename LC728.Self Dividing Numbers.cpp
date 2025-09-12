class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>nova;
        for(int i=left;i<=right;i++){
            int ov=i;
           bool istrue=true;
            while(ov>0){
                int dig=ov%10;
                if(dig==0||i%dig!=0){
                    istrue=false;
                    break;
                }
                ov=ov/10;
             }
          if(istrue==true){
            nova.push_back(i);
          }
       }
        return nova;
    }
};
