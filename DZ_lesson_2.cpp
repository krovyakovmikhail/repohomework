// DZ_lesson_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>   // шаблонная функция обмена значений в указателе. 
void Swap(T* A, T* B)
{
    T buf = *A;

    *A = *B;
    *B = buf;

};

template <typename T>
T SortPointers(T vec)
{
    
  auto compair = [](const int* valA, const int* valB)  { return *valA < *valB; }; // на выходе сравнениедвух эл., но в них указатели, а не значения. 

    
 std::sort(vec.begin(), vec.end(), compair);
    


    return vec;
};



int main()
{
    ///////////////////////////////////////////////////////////////////////////////////////////
    //      Задание 1.
    int a = 11;
    int b = 22;


    int* ptr_a = &a;
    int* ptr_b = &b;

    std::cout <<"--before--"<< std::endl;
    std::cout << "ptr_a" << " "<< *ptr_a <<std:: endl;
    std::cout << "ptr_a" << " " << ptr_a << std::endl;
    std::cout <<  std::endl;
    std::cout << "ptr_b" << " "<< *ptr_b << std::endl;
    std::cout << "ptr_b" << " " << ptr_b << std::endl;
    std::cout << std::endl;

    Swap(ptr_a, ptr_b);  

    std::cout << "--after--" << std::endl;
    std::cout << "ptr_a" << " " << *ptr_a << std::endl;
    std::cout << "ptr_a" << " " << ptr_a << std::endl;
    std::cout << std::endl;
    std::cout << "ptr_b" << " " << *ptr_b << std::endl;
    std::cout << "ptr_b" << " " << ptr_b << std::endl;
    std::cout << std::endl;


    ///////////////////////////////////////////////////////////////////////////////////////////
    //      Задание 2.

    int x = 25, y=13, z = 4, i=150;  
    
    int* ptr_x = &x, *prt_y= &y, *ptr_z = &z, *ptr_i = &i;


    std::vector <int*> vector = {ptr_x, prt_y, ptr_z, ptr_i}; // вектор указателей

    std::cout << "-- before sort --" << std::endl;
    for (auto const& element : vector)
        std::cout << *element << ' ';

    vector = SortPointers(vector);

    std::cout << std::endl;
    std::cout << "-- After sort --" << std::endl;
    for (auto const& element : vector)
        std::cout << *element << ' ';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
