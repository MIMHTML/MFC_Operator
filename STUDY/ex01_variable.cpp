#include <iostream>
#include <windows.h>


class study
{
public:
    study()
    {}
    ~study()
    {}
};

struct s_study
{};

int main()
{


    int a, b, c; // �ʱ�ȭ �ϴ� ������ �鿩����.
    float ff = 10.1f; // ��ǻ�ʹ� �������� ��Ȯ�� ǥ�� �س� �� ����. ���� �߻�.
    double df = 10.1;

    if (ff == 10.1f)
    {
        std::cout << "10.1" << std::endl;
    }
    else
    {
        std::cout << "not 10.1" << std::endl;
    }

    auto f = 1.5f;

    study s;
    auto s2 = s;

    s_study ss;
    auto ss2 = ss;

    typedef char Munja;

    Munja m = 's';
    std::cout << m;
}