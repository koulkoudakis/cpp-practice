#include <iostream>
using namespace std;

int sumOfN(int n)
{
  if(n==0) return 0;
  else return n + sumOfN(n-1);
}

int factorial(int n)
{
  if(n==0) return 1;
  else return n * factorial(n-1);
}

float powerOfN(float base, int n)
{
  if(n==0) return 1;
  else if (n==1) return base;
  else if (n<0) return 1 / base * powerOfN(base, n+1);
  else return base * powerOfN(base, n-1);
}

int pow(int base, int n){
  if(n==0) return 1;
  if(n%2==0) return pow(base*base,n/2);
  else return base*pow(base*base, (n-1)/2);
}

double e(int x, int n)
{
  static double p=1, f=1;
  double r;

  if(n==0) return 1;
  else{
    r = e(x, n-1);
    p=p*x;
    f=f*n;

    return r+p/f;
  }
}

double eLoop(int x, int n)
{
  // int s = 1;

  // for(; n>0; n--)
  //   {
  //     s = 1 + (x/n)*s;
  //   }
  // return s;

  double s=1;
  int i;
  double num=1;
  double den=1;

  for(i=1; i<=n; i++)
    {
      num*=x;
      den*=i;
      s+=num/den;      
    }
  return s;  
}

double eHorner(int x, int n)
{
  static int s=1;
  if (n==0) return s;

  s = 1 + (x/n) * s;

  return e(x,n-1);
}

int fib(int n)
{
  if(n<=1) return n;
  return fib(n-1) + fib(n-2);
}

int fibIter(int n)
{
  int t0=0, t1=1, s, i;
  if(n<=1) return n;
  for (i=2; i<=n; i++)
    {
      s = t0+t1;
      t0=t1;
      t1=s;
    }
  return s;
}

int F[10];

int fibMemo(int n)
{
  if (n<=1){
    F[n] = n;
    return n;
  }
  else
  {
    if (F[n-2] == -1)
      F[n-2] = fib(n-2);
    if(F[n-1]== -1)
      F[n-1] = fib(n-1);
  }
  return F[n-2] + F[n-1];
}

int main() {
  // cout << sumOfN(10) << "\n";
  // cout << factorial(5) << "\n";  
  // cout << powerOfN(3,3) << "\n"; 
  // cout << pow(3,3) << "\n"; 
  // cout << e(4,15) << "\n";
  // cout << eLoop(4,15) << "\n";
  // cout << eHorner(4,15) << "\n";
  // cout << fib(7) << "\n";
  // cout << fibIter(7) << "\n";
  for(int i=0; i<10; i++) F[i]=-1;
  cout << fibMemo(7) << "\n";
  
   
}