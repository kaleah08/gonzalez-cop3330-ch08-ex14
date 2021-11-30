/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaleah Gonzalez
 */

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

class test {
  string String;
  public:
  test(string s) : String(s) {};
  void f(const int); 
};

void test::f(const int num) {
cout << String << num << "\n";

}

int main()
try
{
  const int num = 7;
  test myTest(" Hey ");
  myTest.f(num);

  keep_window_open(".");
}
catch (runtime_error e) {
cout << e.what() << "\n";
keep_window_open();
}



