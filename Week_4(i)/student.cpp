#include <iostream>
using namespace std;

class Student{
    private:
    string name_stu;
    int rollno;
    char grade_stu;
    public : 
    Student(){
    };
    Student(string name, int roll, char grade)
        : name_stu(name), rollno(roll),grade_stu(grade){}
    void get_info(){
        cout<<"Enter your name : "<<endl;
        getline(cin>>ws,name_stu);
        cout<<" Enter rollno"<<endl;
        cin>>rollno;
        cout<<"enter your grade"<<endl;
        cin>>grade_stu;
    }
    void print_info()
    {
        cout<<"Name : "<<name_stu<<" RollNo : "<<rollno<<" grade : "<<grade_stu<<endl;
    }
    static bool rollnosort(const Student s1, const Student s2 )
    {
        return s1.rollno>s2.rollno;
    }
};

int main()
{
    int number_of_students;
    cout<<"enter the name of students "<<endl;
    cin>>number_of_students;
    Student s[number_of_students];
    for (int i=0;i<number_of_students;i++)
    {
        cout<<"Enter the details of studnet : "<<i+1<<endl;
        s[i].get_info();
    }
    for (Student& si: s)
    {
        si.print_info();
    }
    for(int i = 0;i<number_of_students-1;i++)
    {
        for (int j=0;j<number_of_students-i-1;j++)
        {
            if(Student::rollnosort(s[j],s[j+1]))
            {
                swap(s[j],s[j+1]);
            }
        }
    }
    cout<<"After SOrting "<<endl;
    for (Student& si : s)
    {
        si.print_info();
    }
}