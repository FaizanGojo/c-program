#include<iostream>
using namespace std;

int main(){
    char name[20],fathersname[20],school[20];
    int maths, bio, chem, phy, comp, total=500;
    float average,obtain;
    
    //input from user
    cout<<"Please Enter your name : "<<endl;
    cin>>name;
    cout<<"Enter your father's name :  "<<endl;
    cin>>fathersname;
    cout<<"Enter school name : "<<endl;
    cin>>school;
    cout<<"Enter your Marks in maths : "<<endl;
    cin>>maths;
    cout<<"Enter your Marks in Physics : "<<endl;
    cin>>phy;
    cout<<"Enter your Marks in Chemistry : "<<endl;
    cin>>chem;
    cout<<"Enter your Marks in computer : "<<endl;
    cin>>comp;
    cout<<"Enter your Marks in Biology : "<<endl;
    cin>>bio;
    
    obtain=maths+phy+bio+comp+chem;
    average=(obtain/total)*100;
    
    cout<<"_____________________________________________________";
    // marksheet as an output
    cout<<"\n\n************ Marksheeet of grade 12th***************"<<endl;
    cout<<"_____________________________________________________";
    cout<<"\nName  :  "<<name<<"\t\t\tFather's name  :  "<<fathersname<<endl;
    cout<<"School Name  :  "<<school<<endl;
    cout<<"_____________________________________________________";
    cout<<"\n\nMaths  :  \t\t "<<maths<<endl;
    cout<<"Physics  :  \t\t"<<phy<<endl;
    cout<<"Chemistry  :  \t\t"<<chem<<endl;
    cout<<"Biology  :  \t\t"<<bio<<endl;
    cout<<"Computer  :  \t\t"<<comp<<endl;
    cout<<"_____________________________________________________";
    
    
    cout<<"\n\t\tTotal marks obtain  :" <<obtain<<endl;
    cout<<"_____________________________________________________";
    cout<<"\n\t\tyour percentage is  :  "<<average<<endl;
    cout<<"____________________________________________________";
    
    string result = (obtain>150) ? "passed" : "failed";
    cout<<"\n\nYou "<<result<<" the exam *_*";
    
    
    
    
    
    
}
