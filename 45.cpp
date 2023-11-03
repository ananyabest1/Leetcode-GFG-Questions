#include <bits/stdc++.h>
using namespace std;
vector<int> primenumber (vector<int>& nums){
     int n = nums.size();
     for(int i=0 ; i<n ; i++){
          if(nums[i]%1==0 && nums[i]%i==0);
     }
     return true;
}
#include <bits/stdc++.h> 
using namespace std; 

vector<int> primenumber (vector<int>& nums) { 
    // Corner case 
    if (n <= 1) 
        return 0; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return 0; 

    return 1; 
} 
int main() 
{ 
    isPrime(11) ? cout << " true\n" : cout << " false\n"; 
    isPrime(15) ? cout << " true\n" : cout << " false\n"; 
    return 0; 
} 