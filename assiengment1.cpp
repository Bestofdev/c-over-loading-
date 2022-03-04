#include <iostream>
using namespace std;
    int area (int x)
   {

     return (3.14*x*x);

   }

    int area (int x, int y)

    {
         return (x*y);

    }

    int area (float x, float y)
     {

        return (0.5*x*y);


    }





int main()
{

    int x;
    int c ;
    int y;
    cout << "1.Area of Circle"<<endl;
    cout << "2.Area of Rectangle"<<endl;
    cout << "3.Area of Triangle"<<endl;
    cout << "4.Exit"<<endl;
    cout << "Enter your choice :";
    cin >>c;

   if(c==1)
   {
       cout << "Enter the value of radius :";
       cin >>x;
       cout <<endl<< "The area of circle is :"<<area(x)<<endl<<main();

   } 
   else if(c==2)
   {
       cout << "Enter the value of length&breath  :";
       cin >>x>>y;
       cout <<endl<< "The area of rectangle is :"<<area(x,y)<<endl<<main();


   }
   else if(c==3)
   {
       cout << "Enter the value of base&height  :";
       cin >>x>>y;
       cout <<endl<< "The area of triangle is :"<<area(x,y)<<endl<<main();
        


   }
   else
    {


    }
   

    return 0; 



}
