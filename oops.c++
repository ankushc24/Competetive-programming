#include <bits/stdc++.h>
using namespace std;

class student{
    string name;
    string dob;
    int age;
    int class1;
    string branch;
    char grade;
    int year;

    public:

    void assign(string na, string dob, int a, int c){
        name=na;
        this->dob=dob;
        age=a;
        class=c;
        roll_no=r;
    }

    void details(){
        cout<<"Name of student is "<<name<<endl;
        cout<<"DOB of student is "<<dob<<endl;
        cout<<"Age of student is "<<age<<endl;
        cout<<"Class of student is "<<class1<<endl;
    }

    void stud_year(int year, string branch){
        this->year=year;
        this->branch=branch;
    }

    void subjects(){
        
    }

    void grades(){
        int total=0;
        for(auto itr: subjects){
            total+=itr.second;
        }
        int ma=n*50;
        int avg=(total/ma)*100;
        if(avg>=80){
            grade='A';
        }
        else if(x>=60){
            grade='B';
        }
        else if(x<60 && x>=45){
            grade='C';
        }
        else{
            grade='R';
        }

        cout<<"Grade of the student is: "<<grade<<endl;
    }

}

int main(){
    student s1;
    s1.assign("Rahul","20-4-2001",20, 230283292);
    s1.details();
    s1.stud_year(3,"CSE");
    s1.grades();
    return 0;
}