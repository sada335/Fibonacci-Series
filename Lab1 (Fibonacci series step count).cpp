//***********CSE 2201**********
//Fibonacci series Algorithm lab code
#include <bits/stdc++.h>
using namespace std;
int cnt1;
int cnt2;
int cnt3;


int recursion_fibbo(int n)
{
    if(n<=1)
    {
        cnt1++;
        return 1;
    }
    else
    {
        cnt1++;
        return recursion_fibbo(n-1)+recursion_fibbo(n-2);
    }

}

int general_recursion_fibbo(int n)
{
    int n1=0;
    int n2=1;
    int next_term= n1+n2;
    cnt2=3;

    cout<<"  Fibonacci numbers: "<<n1<<" "<<n2<<" ";
    for(int i=3;i<=n;i++)
    {
        cout<<next_term<<" ";
        n1= n2;             cnt2++;
        n2= next_term;      cnt2++;
        next_term= n1+n2;   cnt2++;

    }
    cout<<endl;
}

int golden_ratio_fibbo(int n)
{
    double PHI = 1.6180339;      cnt3++;

    int f[6]={0, 1, 1, 2, 3, 5}; cnt3++;

    if(n<6)
    {
        return f[n];             cnt3++;
    }
    else
    {
        int t=5;                 cnt3++;
        int fn=5;                cnt3++;

        while(t<n)
        {
            fn = round(fn*PHI);  cnt3++;
            t++;                 cnt3++;
        }
        return fn;
    }
}

int main()
{
    freopen("Lab1.txt","r",stdin);

    int n;
    //cout<<"Enter input no: ";
    cin>>n;

    cnt1=0;
    recursion_fibbo(n);


    cnt2=0;
    general_recursion_fibbo(n);


    cnt3=0;
    golden_ratio_fibbo(n);

    cout<<"\nStep Count: "<<endl;
    cout<<"  Using recursion: "<<cnt1<<endl;
    cout<<"  Using general recursion: "<<cnt2<<endl;
    cout<<"  Using golden ratio: "<<cnt3<<endl;


    return 0;
}

