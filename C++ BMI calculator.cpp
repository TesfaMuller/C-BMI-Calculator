#include <iostream>
#include <math.h>
using namespace std;

int main(){
//Declaring the variables
float weight,height,BMI,x;

//Inputing the varuables
again: cout<<"Input weight in Kg:" <<endl;
 cin>>weight;
cout<<"Input Height in Metre:" <<endl;
 cin>>height;
 if(height<=0 && weight<=0){
   cout<<"Please Enter a valid information"<<endl;
   goto again;}
cout<<"*****************************************"<<endl; 
 
 //calculating BMI

x=pow(height,2);
BMI=weight/x;
cout<<"Your BMI is:" <<BMI <<endl;

//Deciding the overweightness

if(BMI>=19 && BMI<=25)
  cout<<"You have a normal weight." <<endl;
else if(BMI<19)
  cout<<"You're Underweight." <<endl;
else
  cout<<"You're overweight."<<endl; 
     
//Redoing the entire process

cout<<"*******************************************"<<endl;
cout<<endl;
cout<<"If you want to calculate BMI again ";
goto again;

return 0;

}


 
 
 




    