#include "maxq.h"

using namespace std;

void maxq::push(const vector<int>& v){
  for(int i: v){
    push(i);
  }
}

void maxq::push(int i){
  q.push(i);
  while(!dq.empty() && dq.back()<=i){
    dq.pop_back();
  }
  dq.push_back(i);
}

void maxq::pop(){
  if (dq.front()==q.front()){
    dq.pop_front();
  }
  q.pop();
}

int maxq::getmax(){
  return dq.front();
}
