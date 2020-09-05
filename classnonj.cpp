using namespace std;
#include<iostream>

class Student{
        public:
            string name;
            void print()
                    {
                cout<< "My name is : " << name;
                    }
             };

int main()
{
    Student obj;
    obj.name ="Divyam";

    obj.print();
    return 0;
}
