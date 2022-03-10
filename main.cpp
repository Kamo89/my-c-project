#include <iostream>
using namespace std;

int main()
{
   int age;
   int weight;
   cout<<"please enter your age"<<endl;
   cin>>age;
   cout<<"please enter your weight"<<endl;
   cin>>weight;
   
   if(age<15 && weight>60)
   {
        cout<<"you are over weight"<<endl;
   }
   else
   {
       cout<<"keep your weight in check"<<endl;
   }
    return 0;
}

