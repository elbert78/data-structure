#include <bits/stdc++.h>
using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef string str;

// Arrays -> can be any datatype
// Create
// Access
// Set a value / modify
// Print the list

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  // Array 1D
  // Create Array 
  int number[10]  = {10, 20, 33, 40, 50};
  
  // Access Array
  // Index start at 0 
  printf("%d\n", number[2]);

  // Set a value to a specific index
  number[7] = 99;
  scanf("%d", &number[9]); getchar();

  // Print all the number with loop
  for(int i = 0; i < 10; i++){
    printf("%d ", number[i]);
  }
  printf("\n");

  // Array with string
  char chr; // Single character -> 'a', 'x', '?'
  scanf("%c", &chr);
  printf("%c\n", chr);

  char string[20]; // A string aka. array of character
  scanf("%s", string);
  printf("%s\n", string); getchar();

  scanf("%[^\n]", string); getchar();
  printf("%s\n", string);

  char listofstring[20][100]; // List of string
  for(int i = 0; i < 3; i++){
    scanf("%[^\n]", listofstring[i]); getchar();
    printf("%s\n", listofstring[i]);
  }

  return 0;
}