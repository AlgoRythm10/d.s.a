//code for implmentation of binary tree
#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node*left,*right;
    Node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
int main(){
    int x,first,second;
    cout<<"Enter the root element:";
    cin>>x;
    queue<Node*>q;
    Node*root=new Node(x);
    q.push(root);
    //build binary tree
    while(!q.empty())
    {
        Node*temp=q.front();
        q.pop();
        cout<<"Enter the left value of"<<temp->data<<":";
        cin>>first;//left child
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right value of"<<temp->data<<":";
        cin>>second;//right child
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
}