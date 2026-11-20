#include <iostream>

typedef std::string string;

class Student{
    
    private:
        string student_id;
        string student_name;
        double math_grade;
        double python_grade;
        
    public:
        void setID(string id) { student_id = id; }
        void setName(string name) { student_name = name; }
        void setMathGrade(double grade) { 
            
            math_grade = grade; 
            
            if( math_grade < 0 || math_grade > 20){
                   std::cout << "Invalid Grade. In object " << getName() << ". In method setMathGrade."<< std::endl <<
                       "Make sure the grade is within the interval [0; 20]." << std::endl;
                   math_grade = 0;
                   return;
            }
            
        }
        
        void setPythonGrade(double grade) { 
            python_grade = grade; 

            if (python_grade > 20 || python_grade < 0){
                std::cout << "Invalid Grade. In object " << getName() << ". In method setPythonGrade."<< std::endl <<
                    "Make sure the grade is within the interval [0; 20]." << std::endl;
               python_grade = 0;
               return;
            }
            
        }

        string getID() const { return student_id; }
        string getName() const { return student_name; }
        double getMathGrade() const { return math_grade; }
        double getPythonGrade() const { return python_grade; }

        Student(string id, string name, double math_grade, double python_grade){
            setID(id);
            setName(name);
            setMathGrade(math_grade);
            setPythonGrade(python_grade);
        }

        void updateMarks(double mark1, double mark2){
            if (mark1 > 20 || mark1 < 0){
                std::cout << "Invalid Grade. In object " << getName() << ". In method updateMarks, Python Grade." << std::endl <<
                    "Make sure the grade is within the interval [0; 20]." << std::endl;
               return;
            }
            python_grade = mark1;
            
            if (mark2 > 20 || mark2 < 0){
                std::cout << "Invalid Grade. In object " << getName() << ". In method updateMarks, Math Grade." << std::endl <<
                    "Make sure the grade is within the interval [0; 20]." << std::endl;
                return;
            }
            math_grade = mark2;
        }

        double average() const {
            return (python_grade + math_grade) / 2;
        }

        void display() const {
            std::cout << "ID: " + getID() << std::endl 
            << "Name: " + getName() << std::endl
            << "Math Grade: " << getMathGrade() << std::endl
            << "Python Grade: " << getPythonGrade() << std::endl
            << "Average Grade: " << average() << std::endl;
        }
    
};

void empty_line() { std::cout << std::endl; }

void displayStudent( const Student& s ) { std::cout << s.getID(); }

int main(){

    Student* s = nullptr;
    s = new Student("S-0", "S", 0, 0);
    s -> setID("S-1");

    Student Rebecca("RB-01", "Rebecca", 3.2, 10);
    Student David("DA-00", "David", 5.12, 9.6);
    Student Lucy("LY-02", "Lucy", 18.21, 19.5);

    Rebecca.updateMarks(10.123, 1);

    empty_line();

    s -> display();
    empty_line();
    delete s;

    displayStudent(Rebecca);
    empty_line();
    
    David.display();
    empty_line();
    
    Lucy.display();
    empty_line();

    return 0;
}