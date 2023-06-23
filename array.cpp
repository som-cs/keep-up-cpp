#include<iostream>
#include<vector>

class Array{
  std::vector <int> a;
  public:
    Array(){
      a.insert(a.begin(), 1);
    }
    int get_size(){
      return a.size();
    }
};

int main (){
  Array a;
  std::cout<<a.get_size();
  return 0;
}
