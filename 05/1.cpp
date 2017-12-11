#include <iostream>     // std::cout
#include <algorithm>    // std::move (ranges)
#include <utility>      // std::move (objects)
#include <vector>       // std::vector
#include <string>       // std::string

int main () {
  std::vector<std::vector<int> > bar(4);
  std::vector<std::vector<int> > foo(4);
  std::vector<int> g = {1, 2, 3, 4, 5};
  std::vector<int> g1 = {1, 2, 3, 4, 6};
  bar[0] = bar[1] = g;
  bar[2] = bar[3] = g1;
  std::copy(bar.begin(), bar.end(), foo.begin());
  for (int i = 0; i < 4 ; i++)
      for (int j = 0 ;j < 5; j++)
          std::cout << foo[i][j] << ' ';
  std::cout << std::endl;
  for (int i = 0; i < 4 ; i++)
      for (int j = 0 ;j < 5; j++)
          std::cout << bar[i][j] << ' ';
  return 0;
}
