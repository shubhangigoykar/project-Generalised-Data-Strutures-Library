#include"Header163.h"

DoublyCLL::DoublylyCLL()
{
    Head=NULL;
    Tail=NULL;
    CountNode=0;
}

void DoublyCLL::InsertFirst(int no)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(CountNode==0)//if(Head==NULL)&&(Tail==NULL)
    {
        Head=newn;
        Tail=newn;
    }
    else
    {
        newn->next=Head;
        Head->prev=newn;

        Head=newn;
    }
    Head->prev=Tail;
    Tail->next=Head;

    CountNode++;


    
}

void DoublyCLL::InsertLast(int no)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(CountNode==0)//if(Head==NULL)&&(Tail==NULL)
    {
        Head=newn;
        Tail=newn;


    }
    else
    {
        Tail->next=newn;
        newn->prev=Tail;

        Tail=newn;


    }
    Head->prev=Tail;
    Tail->next=Head;

    CountNode++;
    
}

void DoublyCLL::InsertAtPos(int no, int iPos)
{
    if((iPos<1)||(iPos>CountNode+1))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos==1)
    {
        InsertFirst(iNo);

    }
    else if(iPos==CountNode+1)
    {
        InsertLast(iNo);

    }
    else
    {
        PNODE newn=NULL;
        newn=new NODE;

        newn->data=iNo;
        newn->next=NULL;
        newn->prev=NULL;

        PNODE temp=Head;

        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

          newn->next=temp->next;
          temp->next->prev=newn;
          temp->next=newn;
          newn->prev=temp;

          CountNode++;


    }
}

void DoublyCLL::DeleteFirst()
{
    if(CountNode==0)
    {
        return;
    }
    else if(CountNode==1)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }
    else
    {
        Head=Head->next;
        delete Tail->next;//delete Head->prev;
    }
    Tail->next=Head;
    Head->prev=Tail;
    CountNode--;
}

void DoublyCLL::DeleteLast()
{
    if(CountNode==0)
    {
        return;
    }
    else if(CountNode==1)
    {
        delete Tail;//delete Head
        Head=NULL;
        Tail=NULL;
    }
    else
    {

        Tail=Tail->next;
        delete Tail->next;//delete Head->prev;

    }
    Tail->next=Head;
    Head->prev=Tail;
    CountNode--;
    
}

void DoublyCLL::DeleteAtPos(int iPos)
{
    if((iPos<1)||(iPos>CountNode))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();

    }
    else if(iPos==CountNode)
    {
        DeleteLast();

    }
    else
    {
        PNODE temp=HEAD;

        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

          temp->next=temp->next->next;
          delete->temp->next->prev;
          temp->next->prev=temp;
          

          CountNode--;
        

        
    }
    
}

void DoublyCLL::Display()
{
    int i=0;
    PNODE temp=Head;

    for(i=1;i<=CountNode;i++)
    {
        cout<<"|"<<Head->data<<"|->";
        temp=temp->next;
    }
    cout<<"\n";
}

int DoublyCLL::Count()
{
    return CountNode;
    
}

