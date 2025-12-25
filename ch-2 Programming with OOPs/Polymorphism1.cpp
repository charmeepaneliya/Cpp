    #include<iostream>
    using namespace std;

    class Student{

        public:
        virtual void getMarks(){
                cout<<"student marks is=70 "<<endl;
            }
    };

    class Student2 : public Student{
        public:
            void getMarks(){
                cout<<"student marks is= 90"<<endl;
            }

    };

    int main(){

        Student2 s2;

        Student &s1 = s2;

        s1.getMarks();
    

        return 0;
    }