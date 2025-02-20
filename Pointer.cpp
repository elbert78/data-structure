#include <bits/stdc++.h>
using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef string str;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int x = 20; // Store Value 
  int *px = &x; // Pointer to x -> Store address of x
  int **ppx = &px; // Pointer to Pointer x -> Store address of px

  printf("value of x   = %d\n", x);
  printf("address of x = %d\n\n", &x);

  printf("value of x                = %d\n", px);
  printf("address of x              = %d\n", &px);
  printf("access value of x with px = %d\n\n", *px);

  printf("value of x                  = %d\n", ppx);
  printf("address of x                = %d\n", &ppx);
  printf("access value of x with ppx  = %d\n\n", **ppx);
  
  *px = 30;
  printf("value of x   = %d\n", *px);

  **ppx = 20;
  printf("value of x   = %d\n", **ppx);
  return 0;
}