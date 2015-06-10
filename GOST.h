#include <iostream>
#include <fstream>
#include <memory.h>

using namespace std;

class GOST
{
    typedef unsigned char Block[32];
    typedef unsigned char Block32[4];

    unsigned char *buf, result[32];

    unsigned int len;

    int fi(int arg);

    void E_f(unsigned char A[], unsigned char K[], unsigned char R[]);
    void E(unsigned char D[], unsigned char K[], unsigned char R[]);
    void A(unsigned char Y[], unsigned char R[]);
    void P(unsigned char Y[], unsigned char R[]);
    void psi(unsigned char arr[]);
    void psi(unsigned char arr[], int p);
    void f(unsigned char H[], unsigned char M[], unsigned char newH[]);
public:
    bool read_file(char *fileName);
    bool write_file(char *fileName);
    
    void gost();
};
