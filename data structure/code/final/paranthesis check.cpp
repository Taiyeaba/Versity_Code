//parenthesis check.............
#include<bits/stdc++.h>

using namespace std;

bool areBracketsBalanced(string expr)
{
    stack<char> temp;
    for (int i=0; i<expr.length(); i++)
    {
        if (temp.empty())
        {
            temp.push(expr[i]);
        }
        //check if the top element is equal to the ith element, if it makes a closed bracket...delete it
        else if ((temp.top() == '(' && expr[i] == ')')|| (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']'))
        {
            temp.pop();
        }
        else //keep pushing remaining str element one by one
        {
            temp.push(expr[i]);
        }
    }
    //if all the bracket get closed one after another...all the stack elements will be deleted
    if (temp.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    string expr;
    cin>>expr;

    if (areBracketsBalanced(expr))
    {
        cout<< "valid";
    }
    else
    {
        cout << "invalid";
    }




    return 0;
}
