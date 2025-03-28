#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int swap=0;
    
    for(int i=0; i<10;i++){
        cin>>arr[i];    
    }
    
    for(int m=0;m<10;m++){
        for(int n=0;n<10;n++){
            if(arr[n]>arr[n+1] && n<10){
                swap = arr[n+1];
                arr[n+1] = arr[n];
                arr[n] = swap;
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
