/*
 * @Description: 链队不带头
 * @Author: JayCao
 * @Date: 2022-03-25 20:20:38
 * @LastEditTime: 2022-03-25 21:09:00
 * @LastEditors: JayCao
 */
#include<bits/stdc++.h>
using namespace std;
typedef char ElementType;
typedef struct QNode
{
    ElementType data;
    struct QNode *next;
}QNode;
typedef struct{
    QNode *front;
    QNode *rear;
}LinkQueue;
//1、初始化队列
void InitQueue(LinkQueue *&lq){
  
   lq->front=lq->rear=NULL;
   
}
//2、销毁队列算法
void DestoryQueue(LinkQueue *&lq){
    QNode * pre =lq->front,*p;
    if(pre==lq->rear){
        free(pre);
    }else{
        
        while (lq->front->next!=NULL)
        {
            free(pre);
            pre=lq->front->next;   //释放链表中的节点
        }
        free(pre); //释放最后一个节点
    }
    free(lq); //释放链队节点
}
//3、进队操作
int EnQueue(LinkQueue *&lq,ElementType x){
    QNode *s =(QNode *)malloc(sizeof(QNode));
    cout<<x<<"进队"<<endl;
    s->data=x;
    s->next=NULL;
    if(lq->front==NULL){
        lq->front=lq->rear=s;
    }else{
        lq->rear->next=s; //将节点链到队尾
        lq->rear=s;//移动队尾节点rear指向s
    }
    return 1;
}
//4、出队操作
int DeQueue(LinkQueue *&lq,ElementType &x){
    if(lq->front==NULL){
        return 0;
    }
    //若果只有一个节点
    if(lq->front==lq->rear){
        x=lq->front->data;
        lq->front=lq->rear=NULL;
    }
    //两个以上
    else{
        x=lq->front->data;
        lq->front=lq->front->next;
    }
    return 1;
}
//5、取队头元素
int GetHead(LinkQueue *lq,ElementType &x){
    if(lq->front==NULL){
        return 0;
    }
    x=lq->front->data;
    return 1;
}
//6、判断队空算法
int QueueEmpty(LinkQueue *lq){
    if(lq->front==NULL)
    return 1;
    else
    return 0;
}
int main(){
   LinkQueue * lq;
   cout<<lq<<endl;
   ElementType e;
   InitQueue(lq);
   cout<<"队"<<(QueueEmpty(lq)==1?"空":"不空")<<endl;
   EnQueue(lq,'a');
   EnQueue(lq,'b');
   EnQueue(lq,'c');
   EnQueue(lq,'d');
   EnQueue(lq,'e');
   EnQueue(lq,'f');
   ElementType c;
   GetHead(lq,e);
   cout<<"队头元素："<<e<<endl;
   while (!QueueEmpty(lq))
   {
       DeQueue(lq,e);
       cout<<e<<"DeQue"<<endl;
       /* code */
   }
   DestoryQueue(lq);
   
   return 0;
}