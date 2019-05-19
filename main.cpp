#include <iostream>

using namespace std;
class Student_Details
{
 private:
     int rno;
     string sname;
 public:
    void get_student_details()
    {
        cout<<"Enter the Rno of Student:";
        cin>>rno;
        cout<<"\nEnter the Name of Student:";
        cin>>sname;
    }
    void show_stud_details()
    {
        cout<<"-----------------------"<<endl;
        cout<<"Student Rno:"<<rno<<endl;
        cout<<"Student Name:"<<sname<<endl;
    }
};
class Marks
{
protected:
    int maths,physics,chemistry;
public:
    void get_marks()
    {
        student_details_repeat:
        cout<<"\nEnter the Students Marks in the foll: order,i.e., MPC"<<endl;
        cin>>maths>>physics>>chemistry;
        if(maths>100 || physics>100 || chemistry>100)
        {
            cout<<"Your Marks must be in range 0 - 100 only";
            goto student_details_repeat;
        }
    }


    void show_marks()
    {
        cout<<"Maths Marks:"<<maths<<endl;
        cout<<"Physics Marks:"<<physics<<endl;
        cout<<"Chemistry Marks:"<<chemistry<<endl;
    }

};
class Result : public Student_Details,public Marks
{
 protected:
     int total;
 public:
    void calculate()
    {
        total=maths+physics+chemistry;
    }
    void show_results()
    {
        if(total>250)
        {
            cout<<"Congratulations You have got "<<total<<endl;
        }
        else if(total<250)
        {
            cout<<"Very Good Performance !"<<total;
        }
        else{
            cout<<"Sorry :( ";
        }
    }
};
int main()
{
   Result rs;
   rs.get_student_details();
   rs.get_marks();
   rs.calculate();
   rs.show_stud_details();
   rs.show_marks();
   rs.show_results();
}
