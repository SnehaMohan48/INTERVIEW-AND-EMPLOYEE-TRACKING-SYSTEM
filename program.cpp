#include <iostream>
#include <string>
using namespace std;     	//declaring standard
class FinLeap  	//class declaration
{
public:                    	//private member for class only
    	string firstname,secondname,studentname,department, designation, skills, date, time;  //declaring string variable
int num=0,num2=0,num3=0,opt,age, experience;        	//declaring integer variable
int salary,salaryy,i,fireid=0;
public:
    	void user();
    	void seejob();
    	void checkstatus();
    	void companymenu();              	//declaring function
    	void addemp();
    	void studentmenu();
    	void terminateemp();
    	void promoteemp();
    	void currentemp();
    	void allemp();
    	void addjob();
           void selectedstudents();
}emp[30],jobs[30],status[30];                      	//declaring class variable
void FinLeap::user()
{
	int opt;
	cout<<"\n Which user are you"<<endl;
    cout<<"1.Company"<<endl;
    cout<<"2.Student"<<endl;
    cout<<"3.Exit"<<endl;
	cout<<"Enter a option(1-3):";
	cin>>opt;
	cout<<"\n\n"<<endl;
	sub:
	switch(opt)
	{
	case 1:
     	FinLeap::companymenu();
    	break;
	case 2:
    	FinLeap::studentmenu();
    	break;
	case 3:
    	cout<<"Thank you!!for using my application. :-)"<<endl;
    	break;
	default:
    	cout<<"Wrong input,Try again: ";
    	cin>>opt;
    	goto sub;
    	break;
	}
}
void FinLeap::studentmenu()                    //constructor
{
	int opt;
	initiate:
	cout<<"\n************ Finleap Enterprise LTD ******************"<<endl;
    cout<<"1.SeeJobs"<<endl;
	cout<<"2.Check Status"<<endl;
	cout<<"3.Exit"<<endl;
    cout<<"**************************************************"<<endl;
	cout<<"Enter a option(1-3): ";
	cin>>opt;
	cout<<"\n\n"<<endl;
	sub:
	switch(opt)
	{
	case 1:
    	FinLeap::seejob();
    	goto initiate;
    	break;
	case 2:
    	FinLeap::checkstatus();
    	goto initiate;
    	break;
	case 3:
     	FinLeap::user();
    	goto initiate;
    	break;
	default:
    	cout<<"Wrong input,Try again: ";
    	cin>>opt;
    	goto sub;
    	break;
	}
}
void FinLeap::seejob()
{
    cout<<"***************************Jobs********************************************"<<endl;
	cout<<"*Designation |Experience|Skills|Salary|Date|Time *"<<endl;
    cout<<"***************************************************************************\n"<<endl;
for(i=1;i<=num2;i++)
{
	cout<<i<<". "<<jobs[i].designation<<"  "<<jobs[i].experience<<"   "<<jobs[i].skills<<"  	"<<jobs[i].salary<<"  "<<jobs[i].date<<"  "<<jobs[i].time<<" "<<endl;
	cout<<"\n"<<endl;
}
}
void FinLeap::checkstatus()
{
    cout<<"************Selected students************"<<endl;
	cout<<"*Name|Department*"<<endl;
    cout<<"*****************************************\n"<<endl;
for(i=1;i<=num3;i++)
{
	cout<<i<<". "<<status[i].studentname<<"  "<<status[i].department<<endl;
	cout<<"\n"<<endl;
}
}
void FinLeap::companymenu()                    //constructor
{
	int opt;
	initiate:
	cout<<"\n************ FinLeap Enterprise LTD ******************"<<endl;
	cout<<"1.Add employee"<<endl;
	cout<<"2.Terminate employee"<<endl;
	cout<<"3.Promote employee"<<endl;
	cout<<"4.Current employee"<<endl;
	cout<<"5.All Employee(Present&Past)"<<endl;
	cout<<"6.Add jobs"<<endl;
	cout<<"7.Save selected students"<<endl;
	cout<<"8.Exit "<<endl;
    cout<<"**************************************************"<<endl;
	cout<<"Enter a option(1-8): ";
	cin>>opt;
	cout<<"\n\n"<<endl;
	sub:
	switch(opt)
	{
	case 1:
    	FinLeap::addemp();
    	goto initiate;
    	break;
	case 2:
    	FinLeap::terminateemp();
    	goto initiate;
    	break;
	case 3:
    	FinLeap::promoteemp();
    	goto initiate;
    	break;
	case 4:
    	FinLeap::currentemp();
	    goto initiate;
    	break;
	case 5:
    	FinLeap::allemp();
    	goto initiate;
    	break;
	case 6:
    	FinLeap::addjob();
    	goto initiate;
    	break;
	case 7:
    	FinLeap::selectedstudents();
     	goto initiate;
    	break;
	case 8:
   	FinLeap::user();
    	break;
	default:
    	cout<<"Wrong input,Try again: ";
    	cin>>opt;
    	goto sub;
    	break;
	}
}
 
void FinLeap::addemp()
{
    cout<<"Enter the employee number you want to add(30 max): ";
	cin>>num;
	cout<<"\n";
	for(i=1;i<=num;i++)                	//looping
	{
    	cout<<"Enter the First Name of the Employee "<<i<<" : ";
    	cin>>emp[i].firstname;
    	cout<<"Enter the Second Name of the Employee "<<i<<" : ";
    	cin>>emp[i].secondname;
    	cout<<"Enter the Age of the employee "<<i<<" (Number digit only): ";
    	cin>>emp[i].age;
    	cout<<"Enter the salaryy of the employee "<<i<<" (Number digit only): ";
    	cin>>emp[i].salaryy;
    	cout<<"The ID of the employee is "<<i<<".";
    	cout<<"\n"<<endl;
	}
	cout<<"Records have been saved successfully!!\n\n"<<endl;
}
void FinLeap::addjob()
{
	cout<<"Enter the number of jobs you want to add(30 max): ";
	cin>>num2;
	cout<<"\n";
	for(i=1;i<=num2;i++)                	//looping
	{
    	cout<<"Enter the Designation: ";
    	cin>>jobs[i].designation;
    	cout<<"Enter the Work Experience required: ";
    	cin>>jobs[i].experience;
    	cout<<"Enter the Skills required: ";
    	cin>>jobs[i].skills;
    	cout<<"Enter the salary: ";
    	cin>>jobs[i].salary;
    	cout<<"Interview date: ";
    	cin>>jobs[i].date;
    	cout<<"Interview time: ";
    	cin>>jobs[i].time;
    	
	}
	cout<<"Records have been saved successfully!!\n\n"<<endl;
}
 
void FinLeap::terminateemp()
{
	cout<<"Enter an ID to terminate employee(You can only fire one employee in every program execution): ";
	cin>>fireid;
	cout<<"\n";
	con:
    if((fireid>1)&&(fireid<num))   {
	cout<<"The Employee(ID: "<<fireid<<") has been fired from job\n\n"<<endl;
	cout<<"\n**************Updated Employee List******************"<<endl;
	cout<<"NAME \t\t"<<" ID \t\t"<<" AGE \t\t"<<" Sallary"<<endl;
	for(i=1;i<fireid;i++)
	{
        cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
	}
 
	for(i=fireid+1;i<=num;i++)
	{
        cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
	}
 
	cout<<"\n"<<endl;
}
	else if(fireid==1)
	{
    	cout<<"The Employee(ID: "<<fireid<<") has been fired from job\n\n"<<endl;
        cout<<"\n**************Updated Employee List******************"<<endl;
    	cout<<"NAME \t\t"<<"ID \t"<<" AGE \t"<<" SALARY"<<endl;
    	for(i=2;i<=num;i++)
    	{
            cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
    	}
    	cout<<"\n"<<endl;
	}
 
	else if(fireid==num)
	{
    	cout<<"The Employee(ID: "<<fireid<<") has been fired from job\n\n"<<endl;
        cout<<"\n**************Updated Employee List******************"<<endl;
    	cout<<"NAME \t\t\t"<<"ID \t\t"<<" AGE \t\t"<<" SALARY"<<endl;
    	for(i=1;i<num;i++)
    	{
            cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
    	}
    	cout<<"\n"<<endl;
	}
	else
	{
    	cout<<"Wrong input,Try again: ";
    	cin>>fireid;
    	goto con;
	}
 
}
 
void FinLeap::promoteemp()
{
	int id,amnt=0;
	cout<<"Enter an ID to promote employee:  ";
	cin>>id;
	cout<<"\n"<<endl;
	cout<<"Enter the amount to be increased:  ";
	cin>>amnt;
	cout<<"\n"<<endl;
	for(i=id;i<=id;i++)
	{
    	emp[i].salaryy=emp[i].salaryy+amnt;
    	cout<<"The Employee(id:"<<id<<") is promoted to salaryy: "<<emp[i].salaryy<<" .Congratulations!!\n"<<endl;
	}
}
 
void FinLeap::currentemp()
{
	cout<<"\n**************Current Employee******************"<<endl;
    cout<<"NAME\t\t\t"<<" ID\t\t"<<" AGE \t\t"<<" Salaryy"<<endl;
	if((fireid>1)&&(fireid<num))
{
	for(i=1;i<fireid;i++)
	{
        cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
	}
 
	for(i=fireid+1;i<=num;i++)
	{
        cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
	}
 
	cout<<"\n"<<endl;
}
	else if(fireid==1)
	{
    	for(i=2;i<=num;i++)
    	{
            cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
    	}
 	   cout<<"\n"<<endl;
	}
 
	else if(fireid==num)
	{
    	for(i=1;i<num;i++)
    	{
            cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
    	}
    	cout<<"\n"<<endl;
    }
 
	else if(fireid==0)
	{
    	for(i=1;i<=num;i++)
    	{
            cout<<emp[i].firstname<<" "<<emp[i].secondname<<"\t\t"<<i<<"\t\t"<<emp[i].age<<"\t\t"<<emp[i].salaryy<<endl;
    	}
    	cout<<"\n"<<endl;
	}
}
void FinLeap::allemp()
{
	cout<<"********************All Employee************************"<<endl;
	cout<<"*    Name      |    ID    |   Age    |  Salaryy  *"<<endl;
    cout<<"********************************************************\n"<<endl;
for(i=1;i<=num;i++)
{
	cout<<i<<". "<<emp[i].firstname<<"  "<<emp[i].secondname<<" 	"<< i <<"      "<<emp[i].age<<"  	"<<emp[i].salaryy<<endl;
	cout<<"\n"<<endl;
}
}
void FinLeap::selectedstudents()
{
	cout<<"Enter the number of students selected(30 max): ";
	cin>>num3;
	cout<<"\n";
	for(i=1;i<=num3;i++)                	//looping
	{
    	cout<<"Enter the Name of the student: ";
    	cin>>status[i].studentname;
    	cout<<"Enter the department of the student: ";
    	cin>>status[i].department;
    	cout<<"\n"<<endl;
	}
	cout<<"Records have been saved successfully!!\n\n"<<endl;
}
 
int main() 	//main function
{
	FinLeap obj;    //class object declaration
	obj.user(); //class function execution
	return 0;
}



