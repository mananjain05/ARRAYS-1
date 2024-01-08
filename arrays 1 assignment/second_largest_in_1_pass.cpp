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
        
            
        

     
    int m,s=INT_MIN ;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>m ){
            s=m;
            m=arr[i];
            
        }
        else if(arr[i]<m){
            s=max(s,arr[i]);
            
        }
        
       
    }
    cout<<m<<" "<<s;

}