/*
 * @Description: 
 * @Author: JayCao
 * @Date: 2022-03-31 13:54:56
 * @LastEditTime: 2022-03-31 14:39:01
 * @LastEditors: JayCao
 */
#include<bits/stdc++.h>
using namespace std;
typedef struct  BiTNode
{
    int data;
    BiTNode *lchild,*rchild;
    /* data */
}BiTNode,*BiTree;
void InitTree(BiTree *T,char value){
    BiTNode* node =(BiTNode *)malloc(sizeof(BiTNode));
    node->data=value;
    node->lchild=NULL;
    node->rchild=NULL;

}
void insert(BiTree *T,char value){
    BiTNode* node =(BiTNode *)malloc(sizeof(BiTNode));
    node->data=value;
    node->lchild=NULL;
    node->rchild=NULL;

}
//访问当前树
void visit(BiTree &T){
   
}

//
int main(){
    BiTree root =NULL;
    cout<<root<<endl;
    root=(BiTree)malloc(sizeof(BiTree));
    root->data=1;
    root->lchild=NULL;
    root->rchild=NULL;
    BiTNode *node =(BiTNode *)malloc(sizeof(BiTNode *));
    node->data=2;
    node->lchild=NULL;
    node->rchild=NULL;
    root->lchild=node;

    return 0;
}