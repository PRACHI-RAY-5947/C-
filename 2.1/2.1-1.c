#include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empid;
         char empname[20];
         int bsalary;
         int allowance;
     public:
         Employee()
         {
             bsalary = 1000;
         }
         void Getinput();
         void DispData();
 };
 void Employee::Getinput()
 {
     cout<<"Enter the id: ";
     cin>>empid;
     cout<<"Enter the name: ";
     cin>>empname;
     cout<<"Enter the allowace: ";
     cin>>allowance;
 }
 void Employee::DispData()
 {
     cout<<endl<<empid<<"\t"<<empname<<"\t"<<bsalary<<"\t"<<allowance;
 }
 int main()
 {
     Employee e[3];
     cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<3;i++)
     {
         e[i].Getinput();
     }
     cout<<endl<<"The employee information is:";
     cout<<endl<<"EmpID \t Name \t Bsalary \t Allowance";
     for(int i=0; i<3;i++)
     {
         e[i].DispData();
     }
 }