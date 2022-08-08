#include <bits/stdc++.h> 
using namespace std;

// find square root 49 
int square_root(int n){

    int s =0 ; 
    int e = n ; 
    int ans = -1 ;  // lets say 
    while (s<=e){
        int mid = (s+e)/2 ;
        if(mid*mid==n){
                return mid ; 
        }       
        else if(mid*mid<n){
            ans = mid ;  // say we got  mid = 6, as 6*6< 49 , we update our ans as ans = 6 and try to find larger no is possible
           s = mid+1 ; 
        }
        else {
            e = mid-1 ; 
        }

    }
    return ans ; 

}

int main() {
    int n ; 
    cin >> n ; 

    cout << square_root(n) ; 

    return 0;
}