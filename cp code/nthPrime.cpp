#include <bits/stdc++.h>
using namespace std;

int n = 90000000;
vector<int> v;

void sieve()
{
    bool isPrime[n + 1];

    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) // Fixed loop condition
    {
        if (isPrime[p]) // Fixed condition check
        {
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            v.push_back(i);
        }
    }
}

int main()
{
    sieve();

    int nth;
    cin >> nth;
    cout << v[nth - 1] << endl; // Fixed variable name and indexing

    return 0;
}

/*
ইনপুট:
10
আউটপুট:
29
কারণ প্রথম ১০টি মৌলিক সংখ্যা হলো:
2, 3, 5, 7, 11, 13, 17, 19, 23, 29
এবং ১০ম মৌলিক সংখ্যা 29।

এই কোডটি একটি Sieve of Eratosthenes অ্যালগরিদম ব্যবহার করে প্রথম 90000000 সংখ্যার মধ্যে সকল মৌলিক সংখ্যা
 নির্ণয় করে এবং এরপর ব্যবহারকারী যেই Nth মৌলিক সংখ্যাটি চায়, সেটি প্রদর্শন করে।

*/








