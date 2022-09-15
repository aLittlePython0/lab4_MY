#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class ClassArray
{
    friend void MainF(ClassArray);
private:
    int nArray = 0;
    int* ptrArray;
public:

    ClassArray(int nArray)
    {
        this->nArray = nArray;
        this->ptrArray = new int[nArray];
    }

    ~ClassArray()
    {
        delete ptrArray;
    }



};

void MainF(ClassArray ppp)
{
    int nElem = 0;
    for (int i = 0; i < ppp.nArray; i++)
    {
        if (i % 2 == 0)
        {
            ppp.ptrArray[i] = i - 5;
            nElem++;
        }
        else ppp.ptrArray[i] = i;
    }
    cout << nElem;

}



int main()
{
    ClassArray first(11);
    //MainF(ClassArray ppp);
    return 0;
}