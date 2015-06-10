#include "GOST.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cout << endl << "Использование: ./GOST file_in" << endl << endl;

        return -1;
    }
    else
    {
        GOST hash;

        if (hash.read_file(argv[1]))
        {
            hash.gost();

            if (!hash.write_file((char*)"GOSTsum.txt"))
                cout << "Ошибка записи файла!" << endl << endl;
        }
        else
            cout << "Ошибка чтения файла!" << endl << endl;
    }

    return 0;
}
