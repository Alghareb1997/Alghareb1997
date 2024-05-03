#include <iostream>

using namespace std;

double add (double num1 , double num2)
{
   return  num1+num2 ;

}
double Minus (double num1 , double num2)
{

  return num1-num2 ;
}
double multiply (double num1 , double num2)
{

  return num1*num2 ;

}
double divide (double num1 , double num2)
{


  return num1/num2 ;
}
int  Modulus (int num1 , int num2)
{

  return num1%num2 ;
}
double add_three (double num1 , double num2, double num3)
{

  return num1+num2 +num3 ;
}
double minus_three (double num1, double num2, double num3)
{

  return num1-num2 -num3 ;
}

int main()
{
    while(true)
    {
        int Choice;
        cout << "Choose number of function you need\n1-Add two numbers \n2-minus two numbers\n3-multiply two numbers \n4-divide two numbers \n5-modulus number \n6-Add three number \n7-minus two numbers \n0-Exit\n" ;
        cout<<"Choice: ";
        cin>>Choice;
        if(Choice==1)
        {
            int x ,y;
            cout << "entre two numbers" <<endl ;
            cin >> x >> y ;
           cout <<"Reslut is :" << add(x,y)  << endl;


        }
        else if(Choice==2)
        {
              int x ,y;
              cout << "entre  two numbers" << endl;
            cin >> x >> y ;

          cout << "Reslut is : " <<  Minus(x,y) <<endl;

        }
        else if(Choice==3)
        {
              int x ,y;
              cout << "entre two numbers"<< endl;
            cin >> x >> y ;

          cout << "Reslut is : " <<  multiply(x,y) <<endl;
        }
        else if(Choice==4)
        {
              int x ,y;
              cout << "entre two numbers" << endl;
            cin >> x >> y ;
            while(y==0){
               cout << "wrong number to divide on it /y" << endl;
               cout << "Entre anthor number"<<endl;
                cin >> y;
            }
               cout << "Reslut is : " << divide(x,y) <<endl;

    }
         else if(Choice == 5){
            int x ,y ;
            cout << "entre two numbers"<<endl;
            cin >> x>>y;
            cout <<"Reslut is :" << Modulus(x,y) << endl;
        }
        else if(Choice==6)
        {
          int x , y ,z ;
          cout << "entre three numbers" << endl;
          cin >> x>>y>>z ;
         cout << "Reslut is : " << add_three(x,y,z) <<endl;
        }
        else if(Choice==7)
        {
            int x , y ,z ;
            cout << "entre three numbers" << endl;
          cin >> x>>y>>z ;
          cout << "Reslut is : "<< minus_three(x,y,z)<<endl;
        }
        else if(Choice==0)
        {
            //Exit
            break;
        }
        else
        {
            cout<<"Wrong Choice";
        }
    }
    cout<<endl<<"Thanks for using calculator";
    return 0;
}
