#include <iostream>  
#include <vector>
using namespace std; 

int findUniqueElement(vector<int> arr){
   int ans = 0; 
   for(int i=0; i < arr.size();i++){
     ans = ans^arr[i];
   } 
   return ans;
}

int main(){
     
    vector<int> arr{2,3,4,5,6,2,6,5,3};  
    int unique = findUniqueElement(arr);  
    if(unique != 0){
    cout<<"Unique Element: "<<unique; 
    } 
    else{
        cout<<"no unique element found";
    }
    return 0;
}