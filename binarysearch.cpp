#include <bits/stdc++.h> 
using namespace std;

int Binary_Search(int arr[] , int n , int target){

    int s =0 ;  // start index
    int e = n-1 ; // end index
    while (s<=e){
    int mid = (s+e)/2 ;     
        if(arr[mid]==target){
            return mid  ;    
        }
        else if(arr[mid] <target){   // target lies in right region of mid elemt
             s = mid+1 ;
        }
        else {   
         e = mid -1 ; // arr[mid>target]   target lies in left region of mid elemt
        }

    }

    return -1  ;  // if target not found 

}

int main() {
    
    int n ;
    cout << "Enter ths size of array : " ;  
    cin >> n; 
    
    int arr[n] ; 
    cout << "Enter the elements : " ;   // array must be sorted
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ; 
    }

    int target ; 
    cout << "enter target : " ; 
    cin >> target ; 
    cout << Binary_Search (arr , n , target) ; // returns the index of target if it is present

    return 0;
}   