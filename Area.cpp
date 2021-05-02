#include<iostream>
using namespace std;
float area(float r)
{
    return 3.14*r*r;
}
double area(double b, double h)
{
    return 0.5*h*b;
}
float area(float he, float w)
{
    return he*w;
}
int main()
{
    int c;
    float he,r,w,area1,area3;
    double b,h,area2;
    cout<<"Enter your choice "<<endl ;
    cout<<"Enter 1 for circle"<<endl<<"Enter 2 for triangle "<<endl<<"Enter 3 for rectangle"<<endl;
    cin>>c;
    switch(c)
    {
    case 1:
       cout<<"Enter Radius of circle";
       cin>>r;
       area1=area(r);
       cout<<area1;
       break ;
    case 2:
        cout<<"Enter base of triangle ";
        cin>>b;
        cout<<endl<<"Enter height of triangle";
        cin>>h;
        area2=area(b,h);
        cout<<area2;
        break ;
    case 3:
        cout<<"Enter height of rectangle ";
        cin>>he;
        cout<<endl<<"Enter width of rectangle";
        cin>>w;
        area3=area(he,w);
        cout<<area3;
        break ;
    default : cout<<"Enter valid choice";
    }
    return 0;
}
