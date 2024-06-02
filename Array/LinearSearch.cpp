#include <iostream> 
using namespace std; 
bool LinearSearch(int arr[], int size, int key){
 for(int i=0; i < size ;i++){
    if(arr[i]==key){
        return true;
    }
 } 
 return false;
}

int main(){
    int arr[] ={2,3,4,5,8,6,7,9};  
    int size = sizeof(arr)/sizeof(arr[0]); 
    int key = 10;
    if(LinearSearch(arr,size,key)){
        cout<<key<<" is present in array";
    } 
    else{
        cout<<key<<" is not present is array";
    }
}
