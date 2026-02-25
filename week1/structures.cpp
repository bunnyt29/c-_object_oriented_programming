#include <iostream>

struct Box
{
    double height;
    double width;
    double lenght;
    void print() const;
};

//Влагане на обекти
struct Warehouse
{
    char name[1024];
    Box b1;
    Box b2;
};

void Box::print() const {
    std::cout << height << " " << width << " " << lenght;
    std::cout << "\n";
}

//Подаване във функции
double calculateVolume(const Box& b){
    return b.height * b.width * b.lenght;
}

int main() {
    //Деклариране на обекти от новия тип
    Box b;
    Box b2 = {3, 4, 3.4};
    Box b3;
    b3.height = 13;
    b3.width = 14;
    b3.lenght = 20;

    //Създаване на динамични обекти
    Box* boxPtr = new Box();

    (*boxPtr).height = 2;
    (*boxPtr).width = 3;
    boxPtr->lenght = 4;

    Warehouse w = {"Econt", b2, b3};

    //Масиви от обекти
    Box arr1[20];
    Box* arr2 = new Box[30];

    std::cout << w.name;
    b3.print();
    std::cout << calculateVolume(b3);
    std::cout << "\n";
    std::cout << calculateVolume(*boxPtr);
    return 0;
}