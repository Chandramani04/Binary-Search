#include <bits/stdc++.h> 
using namespace std;

int main() {
     int arr[] = { 1,4,7,12,12,12,12,12,19,27} ; // sorted array
    int n = sizeof(arr) / sizeof(int) ; 
    // both upper bound and lower bound functio return address of that index 
    // so to print value we use int* or auto  datatype

    auto lb = lower_bound(arr,arr+n ,12) ; // lb function reutrn >=key
    cout << " Lower bound : " << lb-arr  << endl;  // to get index no : lb - arr
   

    int* ub = upper_bound(arr,arr+n,12) ; // ub function return >key
    cout << "Upper bound : " << ub - arr  << endl; 
    
    // to find freqency of an element in an sorted array
    // Upper bound - Lower bound 
    cout << "Frequency : " << ub - lb ; 

    return 0;
}