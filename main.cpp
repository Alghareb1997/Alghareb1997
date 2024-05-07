#include <iostream>
#include <cmath>

using namespace std;

 void register_name(string arr[] ,string ar[],int num[]){
    int choice;
       for(int i=0;i<100;i++)
            {
        cout << "please entre name "<<endl;
    cin >> arr[i];
        cout << "please entre id  "<<endl;
    cin >> ar[i];
        cout <<"please entre room number "<<endl;
    cin >> num[i];
     cout << "To register anthor guest"<<endl;
     cout  << "choice : 1 "<<endl;
     cout   << "To end : " <<endl;
     cout    << "choice : 2"<< endl ;
     cin >> choice ;
     if(choice==2){
        break;
     }
   }
 }
 void  search_name(string  arr[] ,string name){
     for(int i=0;i<100;i++){
        if(arr[i]==name){
            cout << "0ur guest"<<endl;
           break ;
        }
     }
     cout << "Not out guest " ;
 }
 int calc(int a ){
     int x   ;
     if(a==1){
          x = a *373 ;
     }
     else if (a==2){
          x = a * 587;
     }
     else if(a=3){
        x  = a *756;
     }
     return x ;
 }



int main( )

{

    while(true)
    {
        string arr[100],ar[100];
        int num[100];

        int choice ;

        cout <<"       <<<<<<<<<<<<< <<<<<<<<<<  Welcome Paris Hotel  >>>>>>>>>> >>>>>>>>>      " <<endl;
        cout << " choice : 1 >> for register new guest  "<< endl    ;
        cout << " choice : 2 >> for search a guest  "<< endl;
        cout << " choice : 3 >> for calculate trip coast "<< endl;
        cout << " choice : 4 >> Feed back about services "<< endl;

     cout << "please entre choice "<< endl;
     cin >> choice ;
     if(choice==1){
         cout << "Welcome with Us " <<endl;
            register_name(arr,ar,num);
     }
       if(choice==2){
            string name;
         cout  << "entre name to search" << endl;
         cin >> name ;
       search_name(arr,name);
       }
       if(choice==3){
            double coast ;
             int click , days ;
        cout << " Click : 1 >> Single room coast = 373 L.E for day "<<endl;
          cout << " Click : 2 >> Double room coast = 587 L.E for day "<<endl;
            cout << " Click : 3 >> studio room coast = 756 L.E for day "<<endl;
            cin >> click ;
            cout << "How many days" << endl;
            cin >> days ;
            cout <<"Trip coast: "<< calc(days);
       }
       if(choice==4){

        cout << "How can help you"<<endl;

       }

    return 0;
}
}
