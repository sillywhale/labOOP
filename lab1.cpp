#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Salary{
public:
  string name;
  double wage;
  int bonus;
  Salary(){
    name = "null";
    wage = 0;
    bonus = 0;
    cout << "Default constructor\n";
  }
  Salary(string Name, double salary, int prem){
    name = Name;
    bonus = prem;
    wage = salary;
    cout << "Initialize constructor";
  }
  Salary(Salary& copy){
    name = copy.name;
    wage = copy.wage;
    bonus = copy.bonus;
  }

  ~Salary(){
    cout << "Destructor\n";
  }

  void setName(string Name){
    name = Name;
  }
  string getName() {
    return name;
  }

  void setSalart(double salary){
    wage = salary; 
  }
  double getSalart(){
    return wage;
  }

  void setBonus(int Bonus){
    bonus = Bonus;
  }

  int getBonus(){
    return bonus;
  }
  
  void print(){
    cout << endl <<"Name: " << name << " Wage is: " << wage << " Bonus is: " << bonus << endl; 
  }
};
int main()
{
  Salary person1{"Zhmih", 16302.12, 2550};
  person1.print();
}
