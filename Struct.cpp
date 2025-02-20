#include <bits/stdc++.h>
using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef string str;



struct games{
  char title[100];
  char developerName[100];
  int totalReviews;
  double price;

  struct reviews{
    char reviewerName [100];
    double totalPlay;
    char review[1000]; 
    int rating;
  };

  struct reviews review[200];
};



void printGameDetail(struct games game[], int index, int indexReview){
  printf("Game Name: %s\n", game[index].title);
  printf("Game Developer: %s\n", game[index].developerName);
  printf("Total Reviews: %d\n", game[index].totalReviews);
  printf("Price: $%.2lf\n", game[index].price);

  printf("Reviewer Name: %s\n", game[index].review[indexReview].reviewerName);
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  //ADT -> games
  //ADT Object -> game
  struct games game[5];
  
  // assign value to the ADT object
  strcpy(game[0].title, "Balatro");
  strcpy(game[0].developerName, "LocalThunk");
  game[0].totalReviews = 8245;
  game[0].price = 9.99;


  // input review
  strcpy(game[0].review[0].reviewerName, "mister jackpots");
  game[0].review[0].totalPlay = 684.5;
  strcpy(game[0].review[0].review, "a long reviewwwwwwww");
  game[0].review[0].rating = 1;


  // assign value to the ADT object
  strcpy(game[1].title, "Dive With Dave");
  strcpy(game[1].developerName, "Dave");
  game[1].totalReviews = 8245;
  game[1].price = 9.99;

  // print value
  printGameDetail(game, 0, 0);

  return 0;
}