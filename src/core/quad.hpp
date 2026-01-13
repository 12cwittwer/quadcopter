#pragma once

#include <ostream>

// Physical paramters that do not change during flight, but do change from quad
// to quad
struct QuadParams {
  double gravity = 9.81; // m/s^2
};

// Physical state that changes during flight
struct QuadState {
  // Position of our center of mass in the world
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;

  // Velocity in world frame
  double vx = 0.0;
  double vy = 0.0;
  double vz = 0.0;

  // Euler angles
  double phi = 0.0;   // Roll
  double theta = 0.0; // Pitch
  double psi = 0.0;   // Yaw

  // Angular velocity in body frame
  double p = 0.0; // Roll Rate
  double q = 0.0; // Pitch Rate
  double r = 0.0; // Yaw Rate
};

class Quad {
public:
private:
  QuadState state;
  QuadParams params;
};

// Helpers
inline std::ostream &operator<<(std::ostream &os, const QuadState &s) {
  os << "Position" << std::endl;
  os << "\tX: " << s.x << " Y: " << s.y << " Z: " << s.z << std::endl;
  return os;
}
