//Fractional Knapsack

#include <bits/stdc++.h>
using namespace std;

class Item
{
    public:
	int value,weight;

	Item(int value, int weight) {
	    this->value=value;
	    this->weight=weight;
	}
};

bool compare(Item a,Item b)
{
	float ratio1=(float)a.value/a.weight;
	float ratio2=(float)b.value/b.weight;
	return ratio1>ratio2;
}

double fractionalKnapsack(int W,Item a[],int n)
{
	sort(a,a+n,compare);

	int currWt=0,i;
	float resultVal=0.0;

	for(i=0;i<n;i++){
        if((currWt+a[i].weight)<=W){
            currWt+=a[i].weight;
			resultVal+=a[i].value;
        }else{
            int left=W-currWt;
            resultVal+=a[i].value*((float)left/a[i].weight);
			break;
        }
	}
	return resultVal;
}

int main()
{
	int W=50;   //Knapsack Weight
	Item a[]={{60, 10}, {100, 20}, {120, 30}};
	int n=3;

	cout<<"Maximum value we can obtain = "<<fractionalKnapsack(W,a,n);
	return 0;
}
