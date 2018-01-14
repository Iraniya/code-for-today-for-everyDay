#include <iostream>
#include "stdio.h"
#include "math.h"
#include <vector>

using namespace std;

int N;
int K;
unsigned long long* Product;

int* StreetValue;
double* Minimum;
//1000000007

int main()
{
//Get input data
scanf("%i %i\n",&N,&K);

if (N < 1) return 0;
if (N > 100000) return 0;
if (K < 1) return 0;
if (K > N) return 0;

StreetValue = new int[N];
Minimum = new double[N];
Product = new unsigned long long[N];

for (int i = 0; i < N; i++)
{
fscanf(stdin,"%i",&(StreetValue[i]));
}

Minimum[0] = log((double)StreetValue[0]);
Product[0] = StreetValue[0];

int Index = -1;
double CurrentMinimum = 0;
for (int CurrentNode = 1; CurrentNode < N; CurrentNode++)
{

if ((CurrentNode-K <= Index)&&(Index >= 0)&&(Minimum[CurrentNode-1] >= CurrentMinimum))
{
//If the last found minimum is still within the range
}
else
{


Index = 0;
CurrentMinimum = 99999999;

for (int PrevNodes = CurrentNode-1; (PrevNodes >= CurrentNode-K)&&(PrevNodes >= 0); PrevNodes--)
{

if (Minimum[PrevNodes] < CurrentMinimum)
{
CurrentMinimum = Minimum[PrevNodes];
Index = PrevNodes;
}
}
}

Minimum[CurrentNode] = CurrentMinimum + log((double)StreetValue[CurrentNode]);
Product[CurrentNode] = (Product[Index] * (unsigned long long)StreetValue[CurrentNode])%1000000007;

}

fprintf(stdout,"%I64d\n",Product[N-1]);

//cleanup
delete[] StreetValue;
delete[] Minimum;
delete[] Product;

return 0;
}
