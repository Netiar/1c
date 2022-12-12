#include<iostream>
using namespace std;
int main()
{
    
  int money;
  cout<<"money that you have:";
  cin>>money; 
  if (money>=1200)
  {
    cout<<"Money i have:"<<money<<endl;
    cout<<"Let's have coffee at mavinduni"<<endl;

  }
  else if(money>700)
  {
    cout<<"Money i have:"<<money<<endl;
    cout<<"Let's have coffee at CBD"<<endl;
  }   
  else if(money>500)
  {
    cout<<"Money i have:"<<money<<endl;
    cout<<"Let's have coffee at kibanda"<<endl;
  } 
  else if(money>100)
  {
    cout<<"Money i have:"<<money<<endl;
    cout<<"Let's have chapo dondo "<<endl;
  }     
  else
  {
    cout<<"Let's have tea"<<endl;
  } 

      

  cout<<"lets go home now";

  return 0;




}