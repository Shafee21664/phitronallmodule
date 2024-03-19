#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int val;
  Node* next;
  Node(int val)
  {
    this ->val = val;
    this ->next =NULL;
  }

} ;
void insatr_at_head(Node *&head,int v)
{
    Node *newNode =new Node (v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"indart at head"<<endl<<endl;
}
void insart_at_head(Node *&head,int v)
{
    Node *newNode = new Node (v)
    if (head == NULL)
    {
        head = newNode;
        return; 
    }
}
int main ()

{
    cout<<"option 1:Inasat a tail"<<endl;
    cout <<"option 2:print Linked List"<<endl; 
    

    return 0;

}