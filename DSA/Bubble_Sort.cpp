#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int swap=0;
    
    for(int i=0; i<10;i++){
        cin>>arr[i];    
    }
    
    for(int j=0;j<10;j++){
        for(int i=0;i<10;i++){
            if(arr[i]>arr[i+1] && i<10){
                swap = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = swap;
            }
            else{
                continue;
            }
                            
        }
    }
    
    for(int i=0; i<10;i++){
        cout<<arr[i]<<" ";    
    }
    return 0;
}
