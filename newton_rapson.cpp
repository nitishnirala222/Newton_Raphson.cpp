//Newton Raphson Method in cpp.....N.N.....
#include<iostream>
#include<cmath>
#define f(x) x*x-2*x+1
#define df(x) 2*x-2
#define err 0.001
using namespace std;
float fun(float x)
{
    return f(x);
}
float dfun(float x)
{
    return df(x);
}
int main()
{
    int i;
    float x0,x1,h;
    cout<<"enter the value of x0 : ";
    cin>>x0;
    for(int j=1;j<=999;j++)
    {
    h=fun(x0)/dfun(x0);
   x1=x0-h;
   if(fabs(h)>err)
   {
       cout<<"The root is "<<x1<<endl;
       cout<<"No. of iteration is "<<j<<endl;
       cout<<"The value of function is "<<f(x0)<<endl;
   }
   x0=x1;
   }
   return 0;
}
