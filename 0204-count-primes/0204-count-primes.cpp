class Solution {
public:
    int countPrimes(int n) {
        int count =0;
        int arr[5000000]={0};
        for(int i=2;i<n;i++){
            if(arr[i]==0){
                for(long long int j= 2*i ; j<n;j+=i){
                    arr[j]=1;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
        return count;
        
    }
};