class Solution {
public:
    double trimMean(vector<int>& arr) {
       double n=arr.size();
       sort(arr.begin(),arr.end());
       double a= 0.05*n;
       double j=n-2*a;
       double sum=0;
       for(double i=a;i<n-a;i++){
        sum=sum+arr[i];
       }
       return (double)sum/j;
    }
};
