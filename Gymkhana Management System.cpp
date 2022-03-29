#include <bits/stdc++.h>


using namespace std;

class Student{
	public:
	char name[20];
	char Rollno[10];
};

class Society:{
    public:
	char name[10];
    char type[10];
    

}; 

class SocietyMember  :  public Student,public Society{
    public:
}

class Secretaries_of_societies  :  public SocietyMember{
    public:

}


class G_Secretaries_of_council:public Student{

}

class Vice_President:public Student{

}

class President:public Student{

}

int main(){
    Student Students[10];
    Students[0].name="Tanishq Agarwal";
    Students[1].name="Yogesh kumar";
    Students[2].name="Bishnu Amola";
    Students[3].name="Atul Gupta";
    Students[4].name="Ansh Mishra";
    Students[5].name="Nishan Jain";
    Students[6].name="Ayush Agnihotri";
    Students[7].name="Aryan Batt";
    Students[8].name="Pramod Jatt";
    Students[9].name="Rishabh Jain";
    Students[0].Rollno="19CE01011";
    Students[1].Rollno="19CE01012";
    Students[2].Rollno="19CE01013";
    Students[3].Rollno="19CE01014";
    Students[4].Rollno="19CE01015";
    Students[5].Rollno="19CE01016";
    Students[6].Rollno="19CE01017";
    Students[7].Rollno="19CE01018";
    Students[8].Rollno="19CE01019";
    Students[9].Rollno="19CE01020";
    
    Society Societies[3];
    Societies[0].name="Neuro";
    Societies[1].name="D-gang";
    Societies[2].name="S4S";
    Societies[0].type="Tech";
    Societies[1].type="Cultural";
    Societies[2].type="Social";
    
        
}

