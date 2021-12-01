#include<iostream>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T; i++)
    {
         float S,A,B,C;
         cin>>S>>A>>B>>C;
         float P;
         P = S+((S*C)/100);
         if((P>=A) && (P<=B))
         {
             cout<<"Yes";
         }
         else
         {
             cout<<"No";
         }
    }
    return 0;
}
