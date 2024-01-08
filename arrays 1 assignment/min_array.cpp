#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
        
            
        

    } 
    int m=INT_MAX ;
    for(int i=1;i<=n-1;i++){
        m=min(m,arr[i]);
    }
    cout<<m;
}