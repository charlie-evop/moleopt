#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <map>

typedef std::vector<double> double_vector;

struct evaluated_point {
  double_vector dec_space;
  double_vector obj_space;
  std::vector<double_vector> gradients;
  
  // bool operator<(const evaluated_point& rhs) const {
  //   int i = 0;
  //   int max_index = std::max(this->obj_space.size(), rhs.obj_space.size()) - 1;
  //   
  //   if (this->obj_space[i] == rhs.obj_space[i]) {
  //     if (i < max_index) i++;
  //   }
  //   
  //   return this->obj_space[i] < rhs.obj_space[i];
  // }
};

typedef std::map<double, evaluated_point> efficient_set;

typedef std::function<std::vector<double>(std::vector<double>)> optim_fn;
typedef std::function<std::vector<double_vector>(evaluated_point)> gradient_fn;
typedef std::function<evaluated_point(evaluated_point, double_vector)> corrector_fn;
// typedef std::function<int(std::vector<efficient_set>, evaluated_point)> set_duplicated_fn;

#endif