#include <iostream>
class Calculator
{
 int x;
 int y;
public:
 void setX(int a) { x = a; }
 void setY(int a) { y = a; }
 int getX() { return x; }
 int getY() { return y; }
 inline int product() { return x * y; }
};
int main()
{
 printf("Yugaank Pathak H-77\n");
 Calculator c;
 for (int i = 1; i <= 10; i++)
 {
 c.setX(i);
 c.setY(i);
 std::cout << "Square of " << i << " is " << c.product() << std::endl;
 }
 return 0;
}
