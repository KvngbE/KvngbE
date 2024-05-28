#include <iostream>

using namespace std;

int main()
{
  double dollar;
  double cedi;

  cout << "Enter amount in dollars($)"<<endl;
  cin>> dollar;

  cedi = dollar * 13;
  cout << "Amount in Cedis = GHC " << cedi << endl;

    return 0;
}
