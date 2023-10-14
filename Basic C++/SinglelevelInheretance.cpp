#include <iostream>
#include <iomanip>
#include <string>
class Entity
{
 int X; 
protected:
 int Y; 
public:
 void move(int x, int y)
 {
 X += x;
 y += y;
 }
 void setX(int x)
 {
 X = x;
 }
 void setY(int y)
 {
 Y = y;
 }
 void printDetails()
 {
 std::cout << "X: " << X << std::endl
 << "Y: " << Y << std::endl;
 }
};
class Player : public Entity
{
 std::string name;
public:
 void setX(int x)
 {
 Entity::setX(x);
 }
 void setY(int y)
 {
 Y = y;
 }
 void setName(std::string s)
 {
 name = s;
 }
 void printDetails()
 {
 Entity::printDetails();
 std::cout << "Name: " << name << std::endl;
 }
};
int main()
{
 std::cout << "Yugaank Pathak H-77" << std::endl;
 Entity e;
 e.setX(0);
 e.setY(0);
 e.move(4, 4);
 e.printDetails();
 std::cout << std::endl;
 Player p;
 p.setX(1);
 p.setY(1);
 p.setName("Shiv");
 p.printDetails();
 std::cout << std::endl;
 p.move(5, 5);
 p.printDetails();
 std::cout << std::endl;
 return 0;
}