#include<bits/stdc++.h>
using namespace std;


const int No_Subjects = 11 ;

int CGPa;





class Semester_1 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }




    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;     

                cout<<"Student is not pass in all the subjects";
                SGPA = 0;
                          }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_2 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_3 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_4 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_5 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_6 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_7 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};










class Semester_8 {

    
    
    
    string Name_of_Subject ;
    int Obt_Marks;

    map<string,int> m;

    int Max_Marks[No_Subjects] = {0};
    int Credits[No_Subjects] = {0};

    int Grades[No_Subjects] = {0};

    float SGPA;

    



    public:





    void Get_Information(int No_Subjects) {

        for(int i=0;i<No_Subjects;i++){
        cin >> Name_of_Subject >> Obt_Marks ;
        cin >> Max_Marks[i] >> Credits[i] ;

        m.insert (pair<string,int> (Name_of_Subject , Obt_Marks)) ;
    }

    }


    void Cal_Grades(int No_Subjects){
        int i=0;

        int*pointer;
        map<string,int> :: iterator it = m.begin();

        while(it!=m.end() && i>No_Subjects){
            
           for(int i=0;i<No_Subjects;i++){
               if(it->second <= 100  &&  it->second >= 90){
                Grades[i]=10;
               }
               else if(it->second < 90  &&  it->second >= 80){
                Grades[i]=9;
               } 
               else if(it->second <80 &&  it->second >= 70){
                Grades[i]=8;
               }
               else if(it->second < 70  &&  it->second >= 60){
                Grades[i]=7;
               }
               else if(it->second < 60  &&  it->second >= 50){
                Grades[i]=6;
               }
               else if(it->second < 50  &&  it->second >= 45){
                Grades[i]=5;
               }
               else if(it->second < 45  &&  it->second >= 40){
                Grades[i]=4;
               }
               else if(it->second < 40){
                Grades[i] = 0;               }
           }

        }
    }


    void Cal_SGPA(int No_Subjects){
        int Grade_Sum;
        int Credit_Sum;

        for(int i=0;i<No_Subjects;i++){
            Grade_Sum += Grades[i]*Credits[i];
            Credit_Sum += Credits[i];

        }

        SGPA = Grade_Sum/Credit_Sum;
    }

    friend void CGPA(class Semester_1 , class Semester_2 , class Semester_3 , class Semester_4 , class Semester_5 , class Semester_6 , class Semester_7 , class Semester_8) ; 


};








void CGPA(Semester_1 obj1 , Semester_2 obj2 , Semester_3 obj3 , Semester_4 obj4 , Semester_5 obj5 , Semester_6 obj6 , Semester_7 obj7 , Semester_8 obj8 ){
     
    CGPa = ((obj1.SGPA + obj2.SGPA + obj3.SGPA + obj4.SGPA + obj5.SGPA + obj6.SGPA + obj7.SGPA + obj8.SGPA) / 8) ;
    
}










int main(){
    Semester_1 obj1;
    Semester_2 obj2;
    Semester_3 obj3;
    Semester_4 obj4;
    Semester_5 obj5;
    Semester_6 obj6;
    Semester_7 obj7;
    Semester_8 obj8;




    return 0;
}









