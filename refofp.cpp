#include<bits/stdc++.h>
using namespace std;
//int a global_var = 45
void minarel (int *p)
{
  *p = 45;
}
int main ()

{
   int val = 100;
   int *p = &val;

   cout<<"passing pointer to funcl=:"<<endl;
   cout<<"Before:"<<*p<<endl;
   cout<<"after:"<<*p<<endl;
   return 0;
}
