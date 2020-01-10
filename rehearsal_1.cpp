#include<iostream>
#include<string>
using namespace std;

int main(){
   double gpa=0;
   string name;

   cout<<"What is your name?:";
   cin>>name;
   cout<<"Whait is your GPA?:";
   cin>>gpa;

   if(gpa>=3.50)
   {
       cout<<name<<" InW Jrim Jrim!!!"<<endl;
   }
   else
   {
       cout<<"Try harder, "<<name<<"!!!"<<endl;
   }   
    
    return 0;
}
