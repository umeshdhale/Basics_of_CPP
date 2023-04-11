#include<iostream>
//using namespace std;

namespace Expleo
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Expleo\n";
            }        
    };
    class Hello
    {
        public:
            int x,y;
    };
}
namespace Infosystems
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Infosystems\n"; 
            }
    };
}
int main()
{   
    Expleo::Demo obj1;
    obj1.fun();
    Infosystems::Demo obj2;
    obj2.fun();

    using namespace Expleo;

    Hello hobj;
    Demo obj3;
    return 0;
}