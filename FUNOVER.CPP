#include<iostream.h>
#include<conio.h>
inline int add (int x ,int y)
{
   return x+y;
}

inline int add (int x,int y,int z)
{
     return  x+y+z;
}
inline double add(double x,double y)
{
       return x+y;
}
void   main()
{
     clrscr();

     cout<<"2 Argument"<<add(100,200)<<endl;
     cout<<"2 Argument"<<add(100,200,300)<<endl;
     cout<<"Double"<<add(12.5,12.6)<<endl;

     getch();
}
