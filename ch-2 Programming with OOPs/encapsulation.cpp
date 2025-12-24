#include<iostream>
using namespace std;

    class Student{

        private:

        int marks = 70;

        public:

        void getMarks(){
             cout << "Students marks is"<< marks <<endl;
        }

       

    };

    int main(){

        Student s1;

        s1.getMarks();

        return 0;
    }


    
    

  
