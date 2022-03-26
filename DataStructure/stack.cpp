/*
 * @Description: 顺序栈
 1、初始化栈
 2、判断栈是否为空
 3、入栈
 4、出栈
 * @Author: JayCao
 * @Date: 2022-03-26 10:53:56
 * @LastEditTime: 2022-03-26 11:43:12
 * @LastEditors: JayCao
 */
#include<bits/stdc++.h>
using namespace std;
#define MaxSize 10
//定义顺序栈
typedef struct 
{
    char data[MaxSize];
    int top;
}SqStack;
void InitStack(SqStack &S){
    S.top=-1;
}
bool StackEmpty(SqStack S){
    if(S.top==-1){
        return true;
    }else{
        return false;
    }
}
bool Push(SqStack &S,char x){
    if(S.top==MaxSize-1){
        return false;
    }else{
        S.top++;
        S.data[S.top]=x;
        return true;
    }
}
bool Pop(SqStack &S,char &x){
    if (S.top==-1)
    {
        return false;
        /* code */
    }else{
        x=S.data[S.top];
        S.top--;
        return true;
    }

    
}
//栈的应用括号匹配
bool BracketCheck(char str[],int length){
    SqStack S;
    InitStack(S);
    //栈空说明匹配失败
    for (int i = 0; i < length; i++)
    {
        if (str[i]=='{'||str[i]=='('||str[i]=='[')
        {
            Push(S,str[i]);
        }else{
            if(StackEmpty(S)){
                return false;
            }
            char TopElem;
            Pop(S,TopElem);
            if(str[i]=='(' &&TopElem!=')' ){
                return false;
            }
            if(str[i]=='['&&TopElem!=']'){
                return false;
            }
            if(str[i]=='{'&&TopElem!='}'){
                return false;
        }
    }
    //检错完毕，完全出栈若为空则，匹配成功
    return StackEmpty(S);
    }
}
int main(){


    return 0;
}
