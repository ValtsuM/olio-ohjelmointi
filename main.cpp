#include <iostream>
using namespace std;

//#include "asunto.h"

#include "kerros.h"
#include "katutaso.h"

int main()
{
    Kerros objKerros;
    objKerros.maaritaAsunnot();

    Katutaso objKatutaso;
    objKatutaso.maaritaAsunnot();

    Asunto objAsunto;
    objAsunto.asukasMaara=2;
    objAsunto.neliot=100;


    return 0;
}
