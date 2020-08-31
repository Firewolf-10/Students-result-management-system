#include <iostream>
using namespace std;

class student
{
    private:char name[50];
            int roll_no,kan,eng,hin,mat,sci,soc;
            float total,percentage;

    public:void get_details();
           void put_details();
           void calculate();

};

void student :: get_details()
{
    cout<<"\nEnter the name of students:\n";
    cin>>name;
    cout<<"Enter Roll Number:\n";
    cin>>roll_no;
    cout<<"Enter Kannada marks:\n";
    cin>>kan;
    cout<<"Enter English marks:\n";
    cin>>eng;
    cout<<"Enter Hindi marks:\n";
    cin>>hin;
    cout<<"Enter Maths marks:\n";
    cin>>mat;
    cout<<"Enter Science marks:\n";
    cin>>sci;
    cout<<"Enter Socail science marks:\n";
    cin>>soc;

}

void student :: put_details()
{
    cout<<"      \n\n        Name          :"<<name;
    cout<<"      \n        Roll Number   :"<<roll_no;
    cout<<"      \n        Kannada       :"<<kan;
    cout<<"    \n        English       :"<<eng;
    cout<<"  \n        Hindi         :"<<hin;
    cout<<"  \n        Maths         :"<<mat;
    cout<<"  \n        Science       :"<<sci;
    cout<<"  \n        Socail Science:"<<soc;
    calculate();
}

void student :: calculate()
{
    total=kan+eng+hin+mat+sci+soc;
    percentage=(total/600)*100;
    cout<<"\n\nTotal marks of all the subject:"<<total;
    cout<<"\n\nPERCENTAGE:"<<percentage;
}

int main()
{
    int n,i;
    student obj[100];
    cout << "\nEnter the number of students:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"\n\nStudent number "<<i+1;
        obj[i].get_details();
    }
    cout<<"\n\n**********************************************";
    cout<<"\n****************STUDENT INFORMATION***********";
    cout<<"\n**********************************************";
    for(i=0;i<n;i++)
    {
        cout<<"\n\nSTUDENT NUMBER "<<i+1;
        obj[i].put_details();
    }
    return 0;
}
