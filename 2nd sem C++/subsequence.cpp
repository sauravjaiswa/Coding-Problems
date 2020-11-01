#include<iostream>
using namespace std;
class a
{
	public:
		int[] compute(int[] a) 
		{
    int N = a.length;
    int[N] f;
    f[0] = 1;

    for (int n = 1; n < N; n++) {
        for (int k = n; k >= 1; k--) {
            f[k] = (f[k] + a[n] * f[k-1]) % 1000000007;
        }
    }

    return f;
}
};
int main()
{
	int a[]={1,2,3,4};
	int tmp[]=compute(a);
	for(int i=0;i<tmp.length;i++)
	cout<<tmp[i]<<endl;
}
