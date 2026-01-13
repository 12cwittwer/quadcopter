#include "core/quad.hpp"
#include <iostream>

int main() {
  QuadState s;
  s.z = 80.0;
  s.vz = 70.0;

  std::cout << "Quadcopter sim skeleton running.\n";
  std::cout << "Initial state: \n" << s << "\n";

  // Later: create Simulator, step(dt), etc.
  return 0;
}
