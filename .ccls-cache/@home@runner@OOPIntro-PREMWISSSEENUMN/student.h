#include <iostream>
using namespace std;

class student{
  private:
    long id;
    string name;
    int age;

  public:
    void set_name(string="Yme");
    void set_age(int = 16);  
    string get_name();
    int get_age();
    void print_age();
    void print_name();
    void print_all();
 
};

void student::set_name(string n){
  name=n;
}

void student::set_age(int num){
  age = num;
}

string student::get_name(){
  return name;
}

int student::get_age(){
  return age;
}

void student::print_name(){
  cout<<"Name:"<<name<<endl;
}

void student::print_age(){
  cout<<"Age:"<<age<<endl;
}

void student::print_all(){
  print_name();
  print_age();
}