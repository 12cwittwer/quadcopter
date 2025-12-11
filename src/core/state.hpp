#pragma once

#include <array>
#include <ostream>

namespace quad {

struct State {
  // Super minimal for now: just altitude and yaw
  double z = 0.0;        // altitude (m)
  double yaw = 0.0;      // yaw angle (rad)
  double vz = 0.0;       // vertical velocity (m/s)
  double yaw_rate = 0.0; // yaw rate (rad/s)
};

// Simple helper to print the state (for debugging)
inline std::ostream &operator<<(std::ostream &os, const State &s) {
  os << "State(z=" << s.z << ", vz=" << s.vz << ", yaw=" << s.yaw
     << ", yaw_rate=" << s.yaw_rate << ")";
  return os;
}

} // namespace quad
