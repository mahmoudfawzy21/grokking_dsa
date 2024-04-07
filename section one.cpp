#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 void liner_search(vector <int> arr , int term){
     for(int i = 0 ; i < arr.size(); i++){
         if( arr[i] == term ){
             cout << i;
             return;
         }
     }
 }
 int binary_search(vector <int> arr , int term){
     int left = 0 ,  right = arr.size() - 1;
     while( left <= right){
         int mid =left + (right - left) / 2 ;
         if(term == arr[mid])
             return mid;
         else if(arr[mid] > term)
             left = mid + 1 ;
         else
             right = mid - 1;
     }
     return -1;
 }
int main(){
      vector<int> arr = {1 , 2 , 3, 4 ,5 , 6, 7, 8 ,9 ,10};
         cout << binary_search(arr , 5) << " ";
         liner_search(arr , 5);
        return 0;
}

