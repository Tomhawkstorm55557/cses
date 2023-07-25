/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n, sum = 0; cin >> n;
  for (int i =0; i < n - 1; i++){
    long long x; cin >> x;
    sum += x;
  }
  cout << (n * (n + 1)) / 2 - sum << endl;
}