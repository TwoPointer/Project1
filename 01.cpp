#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  vector<int> vec = {1, 2, 3, 4, 5};
  for(auto x : vec)
    cout << x << ' ';
  cout << '\n';
  return 0;
}
