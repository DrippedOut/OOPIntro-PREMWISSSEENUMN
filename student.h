#include <iostream>
using namespace std;

class student{
private:
  long id;
  string name;

public:
   void set_name(string="Yme");
    void print_name();
 
};

void student::set_name(string n){
  name=n;
  
}

void student::print_name(){
  cout<<"Name:"<<name<<endl;
}