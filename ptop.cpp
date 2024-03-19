#include<bits/stdc++.h>
void pointme (int *p_p)
{
    *p_p =250;
}

int main()
{
    int val= 50;
    int *p_p = &val;
    cout<<"passing the value into pointer to pointer to function"<< endl;
    cout<<"Before:"<<*p_p<<endl;
    cout<<"After:"<<*p_p<<endl;
    return 0;
}