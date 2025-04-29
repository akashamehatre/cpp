#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class test
{
    private :
		 int a;

    public :
	      void setdata(int x)
	      {
		   a=x;
	      }
	      void showdata()
	      {
		  cout<<setw(25)<<a<<endl;
	      }
	      void show()
	      {
		cout<<setw(50)<<"This is the text";
	      }
    };
void main()
{
    clrscr();

    class test ob;

    ob.setdata(10);

    ob.showdata();

    ob.show();



    getch();
}
