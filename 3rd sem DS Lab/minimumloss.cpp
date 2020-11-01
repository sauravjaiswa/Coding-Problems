#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumLoss function below.
int minimumLoss(vector<long> price) 
{
    int n,i,j,max=-1;
    int diff;
    
    n=(price.end()-price.begin());
    vector<long> tmp(n);
    

    for(i=0;i<n;i++)
    {
        if(max>price[i])
        max=price[i];
    }
    vector<long> yr(max,-1);
    for(i=0;i<n;i++)
    {
        tmp[i]=price[i];
        yr[price[i]]=i;
    }
    


    sort(tmp.begin(),tmp.end());
    diff=INT_MAX;
    for (i=1;i<n;i++) 
    {
        if (tmp[i]-tmp[i-1]<diff && (yr[tmp[i]]<yr[tmp[i-1]])) 
          diff=tmp[i]-tmp[i-1];
    }
      
    return diff;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string price_temp_temp;
    getline(cin, price_temp_temp);

    vector<string> price_temp = split_string(price_temp_temp);

    vector<long> price(n);

    for (int i = 0; i < n; i++) {
        long price_item = stol(price_temp[i]);

        price[i] = price_item;
    }

    int result = minimumLoss(price);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

