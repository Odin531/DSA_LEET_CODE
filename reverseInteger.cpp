#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long i =0;
      
    
        
        while (x!=0)
        {
            i=i*10 + x%10;
            x = x/10;

        }
        
      
                if (i>INT_MAX||i<INT_MIN)
        {
            return 0;
        }
      
      
        return (int)i;
    }
};