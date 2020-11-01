//Roman Multiplication

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    int l,i,j,num,n1,n2;
    char ch;
    l=s.length();
    unordered_map<char,int > map;
    map['I']=1;
    map['V']=5;
    map['X']=10;
    map['L']=50;
    map['C']=100;
    map['D']=500;
    map['M']=1000;
    
    num=0;
    num=num+map[s[l-1]];
    for(i=l-2;i>=0;i--){
        ch=s[i];
        n1=map[s[i+1]];
        n2=map[ch];
        
        if(n1>n2)
            num-=n2;
        else
            num+=n2;
    }
    
    return num;
}

string intToRoman(int num) {
    string ns="";
    int freq,i;
    
    while(num!=0){
        if(num>=1000){
        freq=num/1000;
        for(i=1;i<=freq;i++)
            ns+='M';
        num=num%1000;
        }else if(num>=900){
                ns+="CM";
            num=num%900;
        }else if(num>=500){
            freq=num/500;
            for(i=1;i<=freq;i++)
                ns+='D';
            num=num%500;
        }else if(num>=400){
                ns+="CD";
            num=num%400;
        }else if(num>=100){
            freq=num/100;
            for(i=1;i<=freq;i++)
                ns+='C';
            num=num%100;
        }else if(num>=90){
                ns+="XC";
            num=num%90;
        }else if(num>=50){
            freq=num/50;
            for(i=1;i<=freq;i++)
                ns+='L';
            num=num%50;
        }else if(num>=40){
                ns+="XL";
            num=num%40;
        }else if(num>=10){
            freq=num/10;
            for(i=1;i<=freq;i++)
                ns+='X';
            num=num%10;
        }else if(num==9){
                ns+="IX";
            num=0;
        }else if(num>=5){
            freq=num/5;
            for(i=1;i<=freq;i++)
                ns+='V';
            num=num%5;
        }else if(num==4){
                ns+="IV";
            num=0;
        }else{
            freq=num;
            for(i=1;i<=freq;i++)
                ns+='I';
            num=0;
        }
    }
    return ns;
    
}

int multiply(int n1,int n2){
	return n1*n2;
}

int main(){
	int n1,n2,product;
	string s1,s2;
	cout<<"Enter 2 roman numbers for multiplication:\n";
	cin>>s1>>s2;
	
	n1=romanToInt(s1);
	n2=romanToInt(s2);
	product=multiply(n1,n2);
	cout<<"Result of multiplication: "<<intToRoman(product)<<endl;
}