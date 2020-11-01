#include<iostream> 
using namespace std;
class Base
{
    int x, y; 
    public:
    Base(int xx = 10, int yy = 10)
    {
        x = xx;
        y = yy;
    }
    void Show()
    {
        cout<< x * y << endl;
    }
};
class Derived : public Base
{
    private:
        Base objBase; 
    public:
    Derived(int xx, int yy) : Base(xx, yy), objBase(yy, yy)
    {
        objBase.Show();
    }
};
int main()
{
    Derived objDev(10, 20);
    return 0; 
}
