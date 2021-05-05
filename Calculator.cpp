#include<iostream>
#include<cstdlib>
using namespace std;
class calculator
{
    int a ,b;


public :

    calculator( int a, int b) {
      this->a=a;
      this->b=b;
    }

    float sum()
    {
        float sum;
        sum=a+b;
        cout<<"The sum is :"<<sum;
    }
    float sub()
    {
        float sub;
         sub=a-b;
         cout<<"The Subtraction is :"<<sub;
    }
    float mul()
    {
        float mul;
        mul=a*b;
        cout<<"The multiplication is :"<<mul;
    }
    float div()
    {
        float div;
        div=a/b;
        cout<<"The division is :"<<div;
    }
    float rem()
    {
        float rem;
        rem=a%b;
        cout<<"The remainder is :"<<rem;
    }
};
int main()
{
    int n,n1,flag=1;

    while(flag==1)
    {
    int a,b;
    cout<<"Enter the numbers :";
    cin>>a;
    cin>>b;
    calculator obj(a,b);
    cout<<"Enter your choice :"<<endl;
    cout<<"Enter 1 for sum "<<endl<<"Enter 2 for sub "<<endl<<"Enter 3 for multiplication ";
    cout<<endl<<"Enter 4 for division "<<endl<<"Enter 5 for remainder "<<endl;
    cin>>n;
      switch(n)
    {
    case 1:
        obj.sum();
        break;
    case 2:
        obj.sub();
        break;
    case 3:
        obj.mul();
        break;
    case 4:
        obj.div();
        break;
    case 5:
        obj.rem();
        break;
    default:
        cout<<"Please enter a valid choice ";
    }
    cout<<endl<<"Do you want to perform some calculation again :"<<endl;
    cout<<"Enter 1 if YES"<<endl<<"Enter 2 if NO"<<endl;
    cin>>n1;
    if(n1==1)
    {
        flag=1;
        system("cls");
    }
    else
    {
        flag=0;

    }
    }
}
