#include <bits/stdc++.h>
using namespace std;

class patient
{
private:
    int id;
    int pass;
    int day, mon, year;
    string sday, smon, syear;
    time_t now;
    char name[50];
    int age;
    bool fever;
    bool breath_issue;
    string admin_usr_id = "admin";
    string admin_pass = "admin";
    string regDate;
    char regDatech[20]; /*= "9/6/2021"*/
    string fdoseDate; /*= "10/6/2021"*/
    string secdoseDate; /*= "10/7/2021"*/

public:
    void registration();
    void showdata();
    int ptid();
    int ptpass();
    void date();
};

int main();

int patient::ptid()
{
    return id;
}

int patient::ptpass()
{
    return pass;
}

void patient::date()
{
    //int day,mon,year;
    char regDatech[regDate.length()];
    int i;


    time_t now;

    tm* now_Local;

    now = time(0);

    now_Local = localtime(&now);

    day = now_Local->tm_mday;
    mon = now_Local->tm_mon+1;
    year = now_Local->tm_year+1900;

    sday = to_string(day);
    smon = to_string(mon);
    syear = to_string(year);

    regDate = sday + " " + smon + " " + syear;



    cout <<"Today is: "<<now_Local->tm_mday<<" "<<now_Local->tm_mon+1<<" "<<now_Local->tm_year+1900;

    cout<<"\nAnother way output: "<<regDate;

    for(i = 0; i <= 20; i++)
    {
        regDatech[i] = regDate[i];
    }
    regDatech[i+1]='\0';

}

void patient::registration()
{
    patient pt;
    cout<<"Enter An New Patient ID: ";
    cin.ignore();
    cin>>id;
    cout<<"Enter An New Patient Password: ";
    cin>>pass;
    cout <<"Enter patient name: ";
    cin.ignore();
    cin.getline(name, 50);
    cout <<"Enter patient age: ";
    cin>> age;
    pt.date();
}

void patient::showdata()
{
    cout <<"Patient Name: "<<name<<endl;
    cout <<"Age: "<<age<<endl;
    cout <<"Registration Date: "<<regDatech<<endl;
    //cout <<"Registration Date: "<<sday<<" /"<<smon<<" /"<<syear<<endl;
    //cout <<"First Dose Date: "<<fdoseDate<<endl;
    //cout <<"Second Dose Date: "<<secdoseDate<<endl;
}

void New_Entry()
{
    char ch;
    patient pt;
    ofstream outfile;
    outfile.open("patient.txt",ios::binary|ios::app);
    pt.registration(); //iput ney
    outfile.write((char *) (&pt), sizeof(patient));
    outfile.close();
    cout<<"\nPatient record has been created!!!"<<endl;
    cin.ignore();

    cout<<"Enter another new patient? (y/n): ";
    cin>>ch;
    switch(ch)
    {
        case 'y': New_Entry();
        break;
        case 'n': main();
        break;
        default: cout<<"\a"; main();
    }

}

void Search(int n, int p)
{

    char ch;
    int idnum;
    int passnum;
    patient pt;
    ifstream infile;
    infile.open("patient.txt",ios::binary);
    if(!infile)
    {
        cout<<"Error!! File could not be opend!!!"<<endl;
        cin.ignore();
        cin.get();
    }

    bool flag= false;
    while(infile.read((char *) (&pt), sizeof(patient)))
    {
        if(pt.ptid()== n && pt.ptpass()== p)
        {
            pt.showdata();
            flag = true;
        }
    }
    infile.close();
    if(flag = false)
    {
        cout<<"File not exist!!!"<<endl;
        cin.ignore();
        cin.get();
    }

    cout<<"Search another? (y/n): ";
    cin>>ch;
    switch(ch)
    {
        case 'y': cout<<"Enter Patient ID: "; cin>>idnum;
        cout<<"Enter Patient Password: "; cin>>passnum;
        Search(idnum,passnum); break;

        case 'n': main();
        break;

        default: cout<<"\a"; main();
    }

}

void Delete(int n, int p)
{
    char ch;
    int idnum;
    int passnum;
    patient pt;
    ifstream infile;
    infile.open("patient.txt",ios::binary);
    if(!infile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}

	ofstream outfile;
	outfile.open("Temp.txt",ios::out);
	//infile.seekg(0,ios::beg);
	while(infile.read((char *) (&pt), sizeof(patient))) //Data char e sajabe and read korbe
    {
        if(pt.ptid() !=  n && pt.ptpass() != p)
        {
            outfile.write((char *) (&pt) , sizeof(patient)); //copy korbe search er sathe mille nibe na
        }
    }
    outfile.close();
    infile.close();
    remove("patient.txt");
    rename("Temp.txt","patient.txt");
    cin.ignore();
    cout<<"Patient Data is been deleted!!!"<<endl;

    cout<<"Delete another? (y/n): ";
    cin>>ch;
    switch(ch)
    {
        case 'y': cout<<"Enter Patient ID: "; cin>>idnum;
        cout<<"Enter Patient Password: "; cin>>passnum;
        Delete(idnum,passnum); break;

        case 'n': main();
        break;
        default: cout<<"\a"; main();
    }
}

int main()
{
    int ch; //ch =  choose
    int idnum;
    int passnum;

    system("cls");
    cout<<"Main manu"<<endl<<endl;
    cout<<"1.Registration"<<endl<<endl;
    cout<<"2.Search Patient"<<endl<<endl;
    cout<<"3.Delete"<<endl<<endl;
    cout<<"4.Exit"<<endl<<endl;
    cout<<"Select your option: ";
    cin>>ch;
    system("cls");

    switch(ch)
    {
        case 1: New_Entry(); break;

        case 2: cout<<"Enter Patient ID: "; cin>>idnum;
        cout<<"Enter Patient Password: "; cin>>passnum;
        Search(idnum,passnum); break;

        case 3: cout<<"Enter Patient ID: "; cin>>idnum;
        cout<<"Enter Patient Password: "; cin>>passnum;
        Delete(idnum,passnum); break;

        case 4: break;

        default : cout<<"\a"; main();
    }

    return 0;
}
