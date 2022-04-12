/*
 * @Description: 
 * @Author: JayCao
 * @Date: 2022-04-09 16:22:02
 * @LastEditTime: 2022-04-09 17:02:01
 * @LastEditors: JayCao
 */
#include<bits/stdc++.h>
using namespace std;
typedef struct 
{
    int *elem;//动态数组基址
    int length;//表的长度
    /*a data */
}SSTable;

int SearchSeq(SSTable &ST,int key){
    ST.elem[0]=key; //哨兵
    int i=ST.length;
    for ( i ; key!= ST.elem[i]; i--){}
    return i;
}
int SearchSeqq(SSTable &ST,int key){
    for (int i = 0; i <ST.length; i++)
    {
        cout<<"当前值："<<ST.elem[i];
        if (ST.elem[i]==key)
        {
            return i;
            /* code */
        } 
    }
    return 0;
}

void Init(SSTable &ST){
    ST.elem=(int * )malloc(sizeof(int));
    ST.elem[1]=6;
    ST.elem[2]=1;
    ST.elem[3]=2;
    ST.elem[4]=4;
    ST.elem[5]=0;
    ST.length=5;}
int main(void){
    SSTable ST;
    Init(ST);
    // cout<<SearchSeq(ST,10)<<endl;
    // cout<<SearchSeqq(ST,6)<<endl;

}
