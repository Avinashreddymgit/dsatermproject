#include "student.h"
using namespace std;
studentinfo:: studentinfo(int r,string na,float cg,int n,couseinfo* arr){
  rollno=r;
  name=na;
  cgpa=cg;
  numbersub=n;
  course=arr;
}
