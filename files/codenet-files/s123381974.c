#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<cmath>
#include<cctype>
#include<ctime>
#define pi acos(-1.0)
using namespace std;

 int main()
 {
     string a;
     cin>>a;
     int len=a.length();
     stack <char> q ;
     for(int i=0;i<len;i++){
         if(a[i]=='1'){
             q.push('1');
         }
         else if(a[i]=='0'){
             q.push('0');
         }
         else if(a[i]=='B'){
             if(q.size()>0)
                 q.pop();
         }
     }
     while(q.size()>0){
         cout<<q.top();
         q.pop();
     }
     cout<<endl;
     return 0;
 }