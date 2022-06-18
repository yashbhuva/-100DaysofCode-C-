#include<iostream>
using namespace std;
int c=52;

int main()

{
     int a,b,c;
     cout<<"Enter The Value of a "<<endl; 
     cin>>a;
     cout<<"Enter the value of b "<<endl; 
     cin>>b; 

     c=a + b;

     cout<<"The sum is "<<c<<endl; 
     cout<<"Global variable is "<<::c<<endl;
    cout<<endl;


    float d=25.2F;
    long double e=25.5L;

    cout<<"The size of 25.2 is "<<sizeof(25.2)<<endl;
    cout<<"The size of 25.2F is "<<sizeof(25.2F)<<endl;
    cout<<"The size of 25.2L is "<<sizeof(25.2L)<<endl;

    //Reference Variable

    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    //Typecasting

    int t=25;
    float u=85.78;
    cout<<"The value of t is "<<(float)t<<endl;
    cout<<"The value of t is "<<float(t)<<endl;

    cout<<"The value of u is "<<(int)u<<endl;
    cout<<"The value of u is "<<int(u)<<endl;

    int v = int(y);

    cout<<"The expression is "<<t + u<<endl;
    cout<<"The expression is "<<t + int(u)<<endl;
    cout<<"The expression is "<<t + (int) u<<endl;
    return 0;
    }
