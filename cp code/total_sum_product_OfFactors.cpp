#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll num;
    cin>>num;

    ll temp = num;

    ll power=0 ,total_fact=1 ,sum_fact=1,product_fact=1;
    ll lim=sqrt(num);

    for(ll div=2; div<=lim; ++div)
    {
        power=0;
        while(num%div==0)
        {
            num/=div;
            power++;
        }
        if(power!=0)
        {
            total_fact *= (power+1);
            sum_fact *= (pow(div, power+1)-1)/(div-1);
        }
    }

    if(num>1)
    {
        total_fact = 2;
        sum_fact *= num+1;
        product_fact = num;
    }

    else product_fact = pow(temp, total_fact/2);

    cout<<"Total factors of = "<<total_fact<<endl;
    cout<<"Sum of factors of = "<<sum_fact<<endl;
    cout<<"Product of factors of = "<<product_fact<<endl;

}


/*
ধাপে ধাপে হিসাব:
12 এর গুণনীয়ক: 1, 2, 3, 4, 6, 12
মোট গুণনীয়ক সংখ্যা: 6
গুণনীয়কগুলোর যোগফল: 1 + 2 + 3 + 4 + 6 + 12 = 28
গুণনীয়কগুলোর গুণফল: 1 × 2 × 3 × 4 × 6 × 12 = 20736


12
Total factors of = 6
Sum of factors of = 28
Product of factors of = 1728
*/
