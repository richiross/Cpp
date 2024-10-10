#include <iostream>
struct person
{
  std::string name;
  int age;
};

const person readPerson(int &person_count){
  std::cout << "Enter the name of the person #" << ++person_count << ": ";
  person p;
  std::getline(std::cin >> std::ws,p.name);
  std::cout << "Enter the age of " << p.name << ": ";
  std::cin >> p.age;
  return p;
}

void printPeople(const person &person_one, const person &person_two){
  if(person_one.age > person_two.age){
    std::cout << person_one.name << " ( age " << person_one.age << " ) is older than " << person_two.name << " ( age " << person_two.age << " ).\n";
  }else{
    std::cout << person_two.name << " ( age " << person_two.age << " ) is older than " << person_one.name << " ( age " << person_one.age << " ).\n";
  }
}

int main(){
  int person_count{0};
  const person person_one = readPerson(person_count);
  const person person_two = readPerson(person_count);
  printPeople(person_one, person_two);
}