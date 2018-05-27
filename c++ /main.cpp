#include <iostream>
using namespace std;
class add
{

        public:
        void sum(int, int);
};
void add::sum(int x,int y)
{

    int num1,num2,net;
    cout<<"the sum() function has started"<<endl;
    num1=x;
    num2=y;
    net=num1+num2;
    cout<<"the sum is "<<net<<endl;
}
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    add a1;
    a1.sum(a,b);
    return 0;
}
