#include<iostream>
class TwoNumbers
{
private:
 int x;
 int y;
public:
 void setX(int a) { x = a; }
 void setY(int a) { y = a; }
 friend int product(TwoNumbers); 
};
int product(TwoNumbers t)
{
 return t.x * t.y;
}
int main()
{ int a,b;
 printf("Yugaank Pathak H-77\n");
 TwoNumbers x;
 printf("Enter two numbers\n");
 scanf("%d %d",&a,&b);
 x.setX(a);
 x.setY(b);
 std::cout << "Product: " << product(x) << std::endl;
 return 0;
}
