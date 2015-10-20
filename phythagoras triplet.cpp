/* copyright are only reserved to Mr. Parth Garg
          If you are using turbo c++
          then use iostream.h and math.h
           and remove line "using namespace std;"
  THANK YOU    */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{  int intiger,i,temp;
double triplet;
cout<<"enter the intiger for which you have to find phythagoras triplate(max value ‘32760’)"; //you can increase the max value by doind some minor changes(use long intiger etc) 
cin>>intiger;
    if(intiger==2||intiger==1)
    cout<<"i think there is no triplet of "<<intiger;
    else
     {
        for(i=1;i<32760;i++)
         {triplet=pow((intiger*intiger+i*i),0.5);  //triplet is float type
          temp=pow((intiger*intiger+i*i),0.5);     //temp is intiger type
          if((triplet-temp)==0)  //minus gives you the digit after point
               {
                 cout<<intiger<<"\t"<<i<<"\t"<<triplet<<"\n";
               }
         }
        cout<<"or more can be possible???";// i don't know wheter some place between infinity it can be possible
    }
 return 0;
}
