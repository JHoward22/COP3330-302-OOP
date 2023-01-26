/* 
    -Jaiden Howard
    -COP3330
    -This program finds the roots for quadratic equations

*/


#include <iostream>// Libtaty is used for coout and cin
#include <math.h>// library used for math functions
#include <iomanip>//library used for stram manipulator(set w, ans, setprecision)

using namespace std;

void General_Formula(double a, double b, double c)
{
    double x_sol1 = 0.0, x_sol2 = 0.0;
    double discriminant=0.0;
    discriminant= pow(b,2)-4*a*c;
if(discriminant>=0)
    {  
        x_sol1= (-b + sqrt (pow(b,2)-4*a*c)) / (2*a);
        x_sol2= (-b - sqrt (pow(b,2)-4*a*c)) / (2*a);
        discriminant = pow(b,2) -4*a*c;   
        cout<<"\nThe two real solution for the given quadratic equation are: "<<endl;
        cout<<left<<"First solution---->"<< setw(4)<<right<<setprecision(4)<<x_sol1<<endl;
        cout<<left<<"Second solution---->"<< setw(4)<<right<<setprecision(4)<<x_sol2<<endl;
    }
    else
    {
        cout<<left<<"The given equation does not have real solutions, the discriminant value is:"
        <<discriminant<<endl;
    }
       
}


int main()
{
    double a=7, b=1, c=5;
    
    string answer1="yes";
    string answer2="yes";

   

    while(answer1== answer2)
    {
        cout<<"Please provide the coefficients of your quadratic equation"<<endl;
        cin>> a >> b >> c;

        General_Formula(a,b,c);
        
         cout<<"Do you want to continue using the application?";
        cin >> ws;
        getline(cin,answer2);

    }
   

   




    return 0;
}
