#include <iostream>

using namespace std;

class Box
{
   double width;
public:
   friend void printWidth( Box box )
   {
      cout << "Width of box : " << box.width <<endl;
   }
   void setWidth( double wid )
   {
       width = wid;
   }
};



// 程序的主函数
int main( )
{
   Box box;

   // 使用成员函数设置宽度
   box.setWidth(10.0);

   // 使用友元函数输出宽度
   printWidth( box );

   return 0;
}
