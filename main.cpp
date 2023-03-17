#include <iostream>
#include "vector"
using namespace std;

vector<int> shift_back_val(vector<int> vec, int val) {
  for (int i = 0; i < vec.size(); i++) {
    for (int q = 0; q < vec.size() - 1; q++) {
      if (vec[q] == val)
        swap(vec[q + 1], vec[q]);
    }
  }
  return vec;
}
vector<int> deleted_val(vector<int> vec, int val) {
  for (int i = (int) vec.size() - 1; i >= 0; i--) {
    if (vec[i] == val) {
      vec.pop_back();
    } else break;
  }
  return vec;
}

int main() {
  int sz = 0;
  int n;
  vector<int> vec(sz);
  cout << "Input vector size: ";
  cin >> sz;
  cout << "Input " << sz << " numbers:" << endl;
  for (int i = 0; i < sz; i++) {
    cin >> n;
    vec.push_back(n);
  }
  int del;
  cout << "Input number to delete:";
  cin >> del;
  vec = shift_back_val(vec, del);
  vec = deleted_val(vec, del);
  for (int i = 0; (i < vec.size()); i++)
    cout << vec[i] << " ";
}
