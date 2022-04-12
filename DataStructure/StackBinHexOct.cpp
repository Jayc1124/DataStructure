/*
 * @Description: 
 * @Author: JayCao
 * @Date: 2022-03-28 15:44:09
 * @LastEditTime: 2022-03-28 15:56:38
 * @LastEditors: JayCao
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    stack<int> s;
    s.push(a);
    s.push(b);
    int i=0;
    while (!s.empty())  
    {
        a=s.top()*pow(8,0);
        s.pop();
         b=s.top()*pow(8,1);
        cout<<(a+b)<<endl;

    }
    
    
    return 0;
}