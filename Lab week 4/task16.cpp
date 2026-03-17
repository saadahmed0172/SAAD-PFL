#include <iostream>
using namespace std;

int main(){

int salary,laptopcost,advsalary,totaladvsalary;
salary=10000;
laptopcost=50000;
advsalary= salary * 0.5 ;
totaladvsalary = advsalary * 6 ;
if(totaladvsalary > laptopcost){
    cout<< "you can buy the laptop";
}
else{
    int noofmonthsrequired = laptopcost / advsalary;
    cout<< "you will be able to buy the laptop in "<<noofmonthsrequired<<"months";
}
    return 0;
}