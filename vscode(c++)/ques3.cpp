#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el  "\n"
using namespace std;

struct node
{   ll customerid;
    string name;
    node* next;
};
node* crtnd(ll id,string name)
{

    node* newnode = new node();
    newnode->customerid=id;
    newnode->name=name;
    newnode->next=nullptr;
    return newnode;
}
void add(node** head,ll id,string name)
{
    node* newnode=crtnd(id, name);
    newnode->next=*head;
    *head=newnode;
}
void search(node* head,ll id) {
    node* current=head;
    while (current !=nullptr) {
        if (current->customerid==id) {
            cout <<"Found " << current->name<<el;
            return;
        }
        current=current->next;
    }
    cout <<"not found" <<el;
}

int main(){
    node* head =nullptr;
    add(&head,100,"Surjo");
    add(&head,200,"Ashraful");
    search(head,200);
    search(head,10);
    search(head,100);
}

