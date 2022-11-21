
#include <iostream>
#include<string>
using namespace std;
int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int i=0,p=0,f=0;
    while(s2[i]!='\0'){
        i++;
    }
     while(s1[p]!='\0'){
        if(s1[p]==s2[i-1]){
           f++; 
        }
        p++;
    }
   cout<<f<<endl;
    return 0;
}