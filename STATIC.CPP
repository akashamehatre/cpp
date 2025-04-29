#include<iostream.h>
#include<conio.h>
class test
{
    private :
	      int a;
	      static int count;

    public :
	      static void showdata()
	      {
		  cout<<"count="<<count;
	      }

	      void setdata( int x)
	      {
		  a=x;
		  count++;
	      }

	      void showcount()
	      {
		    cout<<"Count"<<count<<endl;
	      }

	      void showa()
	      {
		   cout<<"Showa"<<a<<endl;
	      }
};
int test :: count;
void main()
{
  class test t1,t2,t3;

  clrscr();

  t1.setdata(10);
  t1.showa();
  t1.showcount();

  t2.setdata(20);
  t3.setdata(30);


   t1.showa();
   t2.showa();
   t3.showa();

   t1.showcount();
   t2.showcount();
   t3.showcount();

   getch();

}
