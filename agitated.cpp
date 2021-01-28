//   __________________
//  | ________________ |
//  ||          ____  ||
//  ||   /\    |      ||
//  ||  /__\   |      ||
//  || /    \  |____  ||
//  ||________________||
//  |__________________|
//  \###################\
//   \###################\
//    \        ____       \
//     \_______\___\_______\
// An AC a day keeps the doctor away.

// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <map>
#include <set>
#include <numeric>
#include <cstring>
#include <queue>
#include <unordered_set>
#include <climits>
#define PI 3.1415926535897932384626
#define e 2.7182818284590452353602874713527
using namespace std;

int fast_pow(int n, int k)
{
  int res = 1;
  while (k > 0)
  {
    if (k % 2)
      res = (res * 1LL * n) % 1000000007;
    n = (n * 1LL * n) % 1000000007;
    k /= 2;
  }
  return res;
}

int inv_mod(int n)
{
  return fast_pow(n, 1000000007 - 2);
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // int t;
  // cin>>t;
  // while(t--)
  // {

  //   }

  int p = 1000;
  float di = 0.23, u = 0.00089, g = 9.8;

  float v, n, cr, po, nr, nf, np;

  for (int i = 0; i < 3; i++)
  {

    //taking input
    cout << "enter voltage (v) = ";
    cin >> v;
    cout << endl;
    cout << "enter current (I) = ";
    cin >> cr;
    cout << endl;
    cout << "enter rps = ";
    cin >> n;
    cout << endl;

    //calculations

    po = (float)(v * cr);
    nr = (float)((pow(di, 2) * n * p) / u);
    nf = (float)(g / pow(n, 2) * di);
    np = (float)(po / (pow(di, 5) * pow(n, 3) * p));

    //answers
    cout << "Power(po) = " << po << endl;
    cout << "Reynolds Number(Nr)= " << nr << endl;
    cout << "Froude Number(Nf) = " << nf << endl;
    cout << "Power Number(Np) = " << np << endl;
  }

  return 0;
}
