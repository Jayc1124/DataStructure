/*
 * @Description: 
 * @Author: JayCao
 * @Date: 2022-04-09 16:22:02
 * @LastEditTime: 2022-04-09 17:26:26
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

int BinarySearch(SSTable &ST,int key){
    int low=0;
    int high=ST.length-1;
    int mid=0;
    while (low<=high)
    {
        mid=(high+low)/2;
        cout<<ST.elem[mid];
        if(key==ST.elem[mid]){
            return mid;
        }else if(key<ST.elem[mid])
        {
            high=mid-1;
        }else{
        low=mid+1;}
    }
    return -1;

    

}


void Init(SSTable &ST){
    ST.elem=(int * )malloc(sizeof(int));
    ST.elem[0]=7;
    ST.elem[1]=9;
    ST.elem[2]=10;
    ST.elem[3]=11;
    ST.elem[4]=12;
    ST.elem[5]=19;
    ST.length=6;
    }
int main(void){
    SSTable ST;
    Init(ST);
    for (int i = 0; i < ST.length; i++)
    {
        cout<<ST.elem[i]<<endl;
        /* code */
    }
    
    cout<<"shuchu"<<BinarySearch(ST,12)<<endl;
    // cout<<SearchSeq(ST,10)<<endl;
    // cout<<SearchSeqq(ST,6)<<endl;

}
