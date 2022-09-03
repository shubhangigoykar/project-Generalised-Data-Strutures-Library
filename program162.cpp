#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
        int CountNode;

     public:
        DoublyCLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int Count();
        void Display();
};

DoublyCLL::DoublyCLL()
{}

void DoublyCLL::InsertFirst(int iNo)
{}

void DoublyCLL::InsertLast(int iNo)
{}

void DoublyCLL::InsertAtPos(int iNo, int iPos)
{}

void DoublyCLL::DeleteFirst()
{}

void DoublyCLL::DeleteLast()
{}

void DoublyCLL::DeleteAtPos(int iPos)
{}

void DoublyCLL::Display()
{}

int DoublyCLL::Count()
{
    return CountNode;
}

int main()
{
    DoublyCLL obj;

    return 0;
}
