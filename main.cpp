#include <iostream>
#include "unsorted.cpp"

using namespace std;

class StudentInfo
{
   friend bool operator==(StudentInfo,StudentInfo);

   private :

   int ID;
   string name;
   float cgpa;

   public :

   StudentInfo();
   StudentInfo(int,string,float);
   void SetId(int);
   void PrintInfo();
   int getID();
   string getName();
   float getCGPA();

};

bool operator==(StudentInfo s1,StudentInfo s2)
{
    return s1.ID==s2.ID;
}
StudentInfo::StudentInfo()
{

}
StudentInfo::StudentInfo(int id,string nam,float cgp)
{
        ID=id;
        name=nam;
        cgpa=cgp;
}

void StudentInfo::SetId(int id){
    ID = id;
}

int StudentInfo::getID()
{
    return ID;
}

string StudentInfo::getName()
{
     return name;
}

float StudentInfo::getCGPA()
{
    return cgpa;
}
void StudentInfo::PrintInfo()
{
    cout<<"\t"<<getID()<<"\t"<<getName()<<"\t"<<getCGPA()<<"\n";
}

void PrintList(UnsortedList<StudentInfo> u)
{
    StudentInfo temp;
    for (int i = 0; i < u.isLength(); i++)
    {
        u.getNextItem(temp);
       temp.PrintInfo();
    }
    cout<<endl;
   // u.resetList();
}

void Checkempty(UnsortedList<StudentInfo> u){


if (u.isEmpty())
{
    cout<<"There is no Student in the list"<<endl;

}
else{
    cout<<"There are some student in the lsit"<<endl;
}


}





int main()
{
   StudentInfo s1 (131,"Shovon",3.5);
   StudentInfo s2 (123,"Sam",2.5);
   StudentInfo s3 (143,"Vonda",1.5);

    UnsortedList<StudentInfo>u1;
    u1.Insert(s1);
    u1.Insert(s2);
    u1.Insert(s3);
  //  u1.resetList();

    PrintList(u1);
    Checkempty(u1);
    u1.Delete(s2);
    PrintList(u1);
    int search;
    cin>>search;
    bool isfoud=false;
    StudentInfo temp;

   temp.SetId(search);
   u1.retriveValue(temp,isfoud);
   if (isfoud)
   {
       cout<<"Item is found"<<endl;
       temp.PrintInfo();
   }


}
