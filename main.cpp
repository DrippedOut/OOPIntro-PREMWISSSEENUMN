#include <iostream>
using namespace std;

#include "student.h"

#define N 3

int main(int argc, char *argv[]) {
  student a[N];
  int i, age;
  string n;

  // 4.Change input from cin to argv

  /* 
  
  ***UNCOMMENT TO ALLOW INPUT FROM ARGV***
  
   int argIndex = 1;

  for (i = 0; i < N; i++) {
    n = argv[argIndex++];
    a[i].set_name(n);
    age = atoi(argv[argIndex++]);
    a[i].set_age(age);
  }
  
  printf("---------------------\n");

  */

  // 1.Ask names and age using cin for N people

  for (i = 0; i < N; i++) {
    cout << "What is your name?";
    cin >> n;
    a[i].set_name(n);
    cout << "What is your age?";
    cin >> age;
    a[i].set_age(age);
  }

  printf("--------------------- \n");

  // 2.Print name and age of all N ppl

  
  for(i=0; i<N; i++){
    cout << "Student " << i+1 << ":" << endl;
    printf("\n");
    // Print both name&age of the student
    a[i].print_all();
    printf("\n");
  }

  printf("--------------------- \n");
  
  // 3.Print name and age of the youngest person

   int young = a[0].get_age(); //Age of Student 1
  
  student youngest = a[0];
  
  for(i=1; i<N; i++){
    if(a[i].get_age()<young){
      young = a[i].get_age();
    }
  }
  // Print all info for the youngest person
  
  cout << "Youngest people: " << endl;
  printf("\n");
  
  for(i=0; i<N; i++){
    if(a[i].get_age()==young){
      a[i].print_all();
      printf("\n");
    }
  }

  printf("--------------------- \n");

  return 0;
}
