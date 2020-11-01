#include<iostream>
using namespace std;
namespace test1
{
    int x=10;
//    int x=30;
}
namespace test2
{
    int x=20;
}
int main()
{
    cout<<test1::x<<"\n";
    cout<<test2::x;
}

