#ifndef __MAXQ__
#define __MAXQ__
#include <queue>
#include <deque>
#include <vector>

class maxq{
  // a queue for data
  std::queue<int> q;

  // helper deque for O(1) max operation
  std::deque<int> dq;

public:

  void push(int);
  void push(const std::vector<int>&);
  void pop();
  int getmax();
};

#endif
