// Definition of findHigh function goes here
using namespace std;
template<typename A, typename B,typename C, typename D>
void findHigh(A Data[],B size,C &index,D &intHigh)
{

    for(int i=0;i<size;i++)
    {
            if(Data[i]>intHigh)
            {
                intHigh=Data[i];
                index=i;
            }
    }
}