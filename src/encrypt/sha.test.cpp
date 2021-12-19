#include <iostream>
#include <bitset>
std::string IntegerToBinary(int a)
{
    try
    {
        if (a < 0)
        {
            throw "[WARNING]: El número de entrada es menor a 0. Solo se aceptan valores positivos";
        }
        
        std::string str = std::bitset<8>(a).to_string();
        return str;
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    return nullptr;
}
int main()
{
    int input;
    std::cin>>input;
    std::cout << "Input:" << input << "\n"; 
    std::cout << "Ouput:" << IntegerToBinary(input) << "\n";
    return 0;
}