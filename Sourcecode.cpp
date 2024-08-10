#include<iostream>
using namespace std;
int prime(int a)
{
    int count=0;
    for(int x=1;x<=a;x++)
    {
       if(a%x==0)
       {
           count++;
       }
    }
    if(count==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int a;
    cout<<"enter number : ";
    cin>>a;
    for(int x=1;x<=a;x++)
    {
        int c=prime(x);
        if(c==1)
        {
            cout<<x;
        }
    }

}
