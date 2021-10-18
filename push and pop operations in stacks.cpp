#include<iostream>
using namespace std;

class Stack
{
public:

    int *arr;
    int top;
    int Size;

    Stack(int n)
    {
        arr=new int[n];
        Size=n;
        top=-1;
    }

    void PushElement(int value)
    {
        if(top==Size-1)
        {
            cout<<"\nStack Overflow";
            return;
        }
        top++;
        arr[top]=value;
    }

    void PopElement()
    {
        if(top==-1)
            cout<<"\nStack is Empty.";
        top--;
    }

    int Top()
    {
        if(top==-1)
           cout<<"\nStack is Empty.";
        else
            return arr[top];
    }

    bool IsEmpty()
    {
        if(top==-1)
            return true;
        return false;
    }

};

int main()
{
    int num,Count,j=2;

    cout<<"Enter the number of which prime factors you want: ";
    cin>>num;

    Stack s1(num);

    while(j<=num)
    {
        Count=0;
        for(int i=1;i<=j;i++)
        {
            if(j%i==0)
            {
                Count++;
            }

        }
        if(Count==2 and num%j==0)
        {
            s1.PushElement(j);
        }

        j++;
    }

    cout<<"\nPrime Factors of number are: ";

    while(!s1.IsEmpty())
    {
        cout<<s1.Top()<<" ";
        s1.PopElement();

    }
}
