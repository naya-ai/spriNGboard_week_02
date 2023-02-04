#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
int f[N+1];
    f[1] = f[2] = 1;
     for (int i = 3; i <= N; i++)         f[i] = f[i-1] + f[i-2];
    return f[N];
}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

