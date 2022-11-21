
#include <iostream>

using namespace std;

int main()
{   
    int t=270,b=0,l=270,r=0;
    int N;
    cin>>N;
    int M;
    cin>>M;
    int arr[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
          if(arr[i][j]==0){
              if(t>i){
                  t=i;
              }
              if(b<i){
                  b=i;
              }
              if(l>j){
                  l=j;
              }
              if(r<j){
                  r=j;
              }
          }  
        }
    }
    cout<<'('<<t<<','<<l<<"),";
        cout<<'('<<t<<','<<r<<"),";
        cout<<'('<<b<<','<<l<<"),";
        cout<<'('<<b<<','<<r<<")";
    
    return 0;
}
