#include <iostream>
#include <assert.h>

enum class Major
{
    undefined,
    Inf,
    Cs,
    InfS,
    S
};

const char* getMajorStd(Major m){
    switch (m)
    {
    case Major::Inf: return "Inf";
    case Major::Cs: return "Cs";
    case Major::InfS: return "InfS";
    case Major::S: return "S";
    }

    return "";
}


struct Student
{
    char name[100] = "";
    unsigned fn = 0;
    Major major = Major::undefined;
};

void printStudnet(const Student& st){
    std::cout << st.name << " " << st.fn << " " << getMajorStd(st.major) << std::endl;
}

const int MAX_STUDENTS_COUNT = 10;
struct StudentsDatabase
{
    unsigned studentCount = 0;
    Student students[MAX_STUDENTS_COUNT];
};

void printDatabase(const StudentsDatabase& database){
    assert(database.studentCount <= MAX_STUDENTS_COUNT);

    for (size_t i = 0; i < database.studentCount; i++)
    {
        printStudnet(database.students[i]);
    }
    
}
int main(){
    return 0;
}