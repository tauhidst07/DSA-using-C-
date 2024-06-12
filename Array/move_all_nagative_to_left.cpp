#include <iostream> 
#include <vector> 
using namespace std; 

int main(){
   //^ MOVE ALL NEGATIVE TO LEFT 
   vector<int> arr{1,2,-3,4,-5,6,0,-9}; 

   int n =0; 
   int p=arr.size()-1; 

   while( n <= p){
    if(arr[n] < 0){
        n++;
    } 
    else{
        swap(arr[n],arr[p]); 
        p--;
    }
   } 

   for(auto value:arr){
   cout<<value<<" "; 
   }


    return 0;
}
