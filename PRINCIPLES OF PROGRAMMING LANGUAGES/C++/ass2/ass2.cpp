/*Create a class Employee that contains
{ employee number, employee name, designation, basic pay,
deductions (LIC, PF) }
Include a member function to get data from user for ‘N’ number of employees. 
Write a C++ program to prepare the pay slips for ‘N’ number of employees using the following details:
D.A = 40% of basic pay
H.R.A = 25% of basic pay
Gross pay = basic pay + D.A. + H.R.A.
Net pay = Gpay – deductions (Net pay is the amount left over after deductions from the gross salary.)
The result of problems is in given format :
(1)Emp. no (2)Emp. name (3)Basic (4)D.A. (5)H.R.A. (5)L.I.C. (6)P.F. (7)Gross pay (8)Net pay*/
#include<iostream>

using namespace std;
class emp
{
    
    int empno;
    char name[50], desig[20];
    float salary, ded, DA, HRA, gross, LIC, PF;
    public:
    void getdata()
    {
        cin>>empno;
        cin>>name;
        cin>>desig;
        cin>>salary;
        cin>>LIC;
        cin>>PF;
    }
        
    void putdata()
    {

      cout<<"\n\n\nEmployee number:"<<empno<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Basic pay:"<<salary<<endl;
      DA=0.4*salary;
      cout<<"D.A.:"<<DA<<endl;
      HRA=0.25*salary;
      cout<<"H.R.A.:"<<HRA<<endl;
      cout<<"IC:"<<LIC<<endl;
      cout<<"PF:"<<PF<<endl;
      gross=salary+HRA+DA;
      cout<<"Gross amount is:"<<gross<<endl;
      ded=LIC+PF;
      cout<<"Net pay:"<<(gross-ded)<<endl;
      }
};
int main()
{
    int n,i;
    cout<<"\nEnter the number of employees:\n";
    cin>>n;
    emp e[n];
    for(i=0;i<n;i++)
    {
     e[i].getdata();
     e[i].putdata();
    }
    return 0;
}
    


