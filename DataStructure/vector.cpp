/*
 * @Description: 
 * @Author: JayCao
 * @Date: 2022-03-28 14:40:44
 * @LastEditTime: 2022-03-28 15:02:12
 * @LastEditors: JayCao
 */
#include<bits/stdc++.h>
using namespace std;
void test(){
    vector<int> v1(10,5);
    v1.insert(v1.begin(),5,20);
    vector<int> v2(10);      //创建一个向量v2，其已开辟10个元素的空间，相当于int v[10];
    vector<int> v3(10,5);    //创建一个向量v3，其已开辟10个元素的空间并全部赋值为5
    vector<int> v4(v3.begin(),v3.end());    //创建一个向量v3,其内容为向量v3的内容
    vector<int> v5(v4);      //创建一个向量v5，其包含了v4的全部内容
    v1.push_back(10);  //插入一个数据10
    vector<int>::iterator it1;   //C98标准
    for(it1=v1.begin();it1!=v1.end();it1++){
        cout<<*it1<<' ';
}
}
int main(){
    test();
    return 0;
}