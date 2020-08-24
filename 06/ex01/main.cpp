#include "Data.hpp"

void * serialize(void)
{
    const char randomLetters[63] =  "abcdefghijklmnopqrstuvwxyz" \
                                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ" \
                                    "0123456789";
    char *raw = new char[20];

    for (int count = 0; count < 8; count++)
        raw[count] = randomLetters[rand() % 62];
    *reinterpret_cast<int*>(raw + 8) = rand() % 32767;
    for (int count = 0; count < 8; count++)
        raw[count + 12] = randomLetters[rand() % 62];
    return (raw);
}

Data * deserialize(void * raw)
{
    Data* data = new Data;
    data->str1 = std::string(static_cast<char*>(raw), 8);
    data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
    data->str2 = std::string(static_cast<char*>(raw) + 12, 8);
    return (data);
}

int main()
{
	srand(time(NULL));

    for (int count = 0; count < 3; count++)
    {
        std::cout << "======== TEST " << count << " ========" << std::endl;

        void *raw = serialize();
        std::cout << "Serialized data adress: " << raw << std::endl;

        Data* data = deserialize(raw);
        std::cout << "Deserialized data adress: " << data << std::endl;
        std::cout << "Deserialized str1: " << data->str1 << std::endl;
        std::cout << "Deserialized n: " << data->n << std::endl;
        std::cout << "Deserialized str2: " << data->str2 << std::endl;

        delete static_cast<char*>(raw);
        delete data;
        std::cout << std::endl;
    }
    return (0);
}