
#include <iostream>
using namespace std;
bool rever(int p,int arr[]){
    if(p<10)return arr[p-1];
    else{
        while(p>0){
            int n=p%10;
            p=p/10;
            if(arr[n-1]==0){
                return 0;
            }
        }
        return 1;
    }
}
int main() {
   int arr[]={1,1,0,0,1,1,0,1,1};
   int N;
   cin>>N;
   int i=0,p=1;
   while(i!=N){
       if(rever(p,arr)){
           i++;
       }
       p++;
   }
   cout<<p-1<<endl;
    return 0;
}