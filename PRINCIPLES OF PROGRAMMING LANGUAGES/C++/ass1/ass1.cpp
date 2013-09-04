/*Create a class DONOR that contains
{ donor number, donor name, age, address, sex, blood group }
Write a Menu driven C++ program to display the result in the form of donor number, name and address of the donors for the following categories:
(a) blood donors having the blood group O+
(b) Make groups of blood donors by their blood group.
(c) blood donors in the age group between 16 to 25
(d) Female donors having blood group A in the age between 19 and 24.
(e) Blood groupwise list

Run by compling first and then
ass1 < ass1.txt
*/

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

class Donor
{
      char name[45];
              int donor_num;
              int age;
              char add[200];
              char sex;
              char grp[4];
      public:
      char * getgrp()
      {
           return grp;
      }
      int getage()
      {
          return age;
      }
      
      int getsex()
      {
          return sex;
          }
      void get_data(){
           cin >>name;
           cin >> donor_num;
           cin >> age;
           cin >> add;
           cin >> sex;
           cin >> grp;
           }
           
          void print_data(){
           cout << "\n the name is " << name;
           cout << "\nthe donor number is " << donor_num;
           cout << "\n the age is " << age;
           cout << "\nyour add is " << add;
           cout << "\nyou are " << sex;
           cout << "\nyour blood grp is " << grp;
           cout<<endl<<endl;
           }
           
      };

int main(){
       int ch;
      while(1){
                cout<< "click 1 or 2 or 3 or 4 or 5\n";
       cin>> ch;
       int n,i;
       Donor p[10];
       switch(ch){
                  case 1 : cout<<"Enter data (could be used only once else old one will get deleted)";
                           cin >> n ;
                           for (i=0;i<n;i++)
                           {
                               p[i].get_data();
                               p[i].print_data();
                               cout <<"\n\n";
                            }
                            
                            break;
                  case 2 :cout<<"\n\n\nThese people have O+ blood group\n" ;
                       for(i=0;i<10;i++)
                          {
                           if(strcmp(p[i].getgrp(),"O+")==0)
                           {
                           p[i].print_data();               
                           }
                          }
                          break ;
                  case 3 : cout<<"\n\n\nBlood group doner between age 16 to 25 are\n" ;
                           for(i=0;i<10;i++)
                          {
                           if(p[i].getage()>=16 && p[i].getage() <=25)
                           {
                           p[i].print_data();               
                           }
                          }
                          break ;
                  case 4 :cout<<"\n\n\nFemale donor between age 16-24 and blood group A are:\n" ;
                           for(i=0;i<10;i++)
                          {
                           if(p[i].getage()>=16 && p[i].getage() <=24 && p[i].getsex()=='F' &&(strcmp(p[i].getgrp(),"A")==0))
                           {
                           p[i].print_data();            
                           }
                          }
                          break ;
                  case 5 : {//char grpdata[4][4];
                           char grpdata[4][4] = {{"A",},{"A+",},{"O+",},{"B",}};
                           for(i=0;i<=3;i++)
                           {cout << "\nTHE people with blood group " << grpdata[i] <<" are \n";
                           for(int j=0;j<10;j++)
                           { if(strcmp(p[j].getgrp(),grpdata[i])==0)
                           p[j].print_data();
                           cout<<endl ;
                       
                           
                           }
                           }
                           break;}
                  case 6 : return 0;
                  }
                  }
       getch ();
              //return 0;
       
}
