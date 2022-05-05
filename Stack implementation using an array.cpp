#include <bits/stdc++.h>
using namespace std;
#define maximum_size 10
int arr[maximum_size];
class use_for_stack
{
	int position_of_top=-1;
    public: int push(int m);
            int pop();
            int peak();
            int display();
};
use_for_stack::push(int m)
{
	if (position_of_top >= (maximum_size - 1))
    {
		cout <<"\nOverflow(insertion not possible): "<<m<<"\n";
	}
	else
	{
		arr[++position_of_top] = m;
		cout<<"\nInserted element in stack: "<< m;
	}
}

use_for_stack::pop()
{

	if (position_of_top < 0)
    {
		cout <<"Underflow(deletion not possible)\n";
	}
	else
    {
        int m = arr[position_of_top--];
        cout <<"\nPopped element from stack: "<<m;
	}
}
use_for_stack::peak()
{
    cout<<"\nTop Element in the stack : ";
    int m=0;
	if (position_of_top < 0)
    {
		cout<<"Stack is Empty";
	}
	else
	{
                m = arr[position_of_top];
                cout<<m<<" ";
	}
}
use_for_stack::display()
{

    int m=0;
	if (position_of_top < 0)
    {
		cout<<"Stack is Empty";
	}
	else
	{       cout<<"\nElements in the stack : ";
            while(position_of_top>=0)
            {
                m = arr[position_of_top--];
                cout<<m<<" ";
            }
	}
}
int main()
{
	class use_for_stack stack;
    stack.push(10);
    stack.push(11);
	stack.push(12);
	stack.push(13);
    stack.push(14);
	stack.push(15);
	stack.push(16);
    stack.push(17);
    stack.push(18);
	stack.push(19);
	stack.push(20);
    stack.push(21);
    cout<<"\n";

	stack.pop();
	stack.pop();
	stack.pop();
    cout<<"\n";
    stack.peak();
	cout<<"\n";
	stack.display();
	cout<<"\n";
	return 0;
}

