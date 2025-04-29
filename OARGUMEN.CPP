#include<iostream.h>
#include<conio.h>
class Rectangle
{
      int height,width;

      public :
	       void setdata(int h, int w)
	       {
		  height=h;
		  width=w;
	       }

	       Rectangle add(Rectangle ob)
	       {
		     Rectangle temp;

		     temp.height=height+ob.height;
		     temp.width=width+ob.width;

		     return temp;
	       }

		void showdata()
		{

		   cout<<"Height="<<height<<endl;
		   cout<<"width="<<width<<endl;
		}
};
void main()
{
    clrscr();

    class Rectangle  R1,R2,R3;

    R1.setdata(100,200);

    R2.setdata(50,50);

    R3=R1.add(R2);

    R1.showdata();
    R2.showdata();
    R3.showdata();

    getch();
}