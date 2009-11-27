#ifndef MOVABLE_H_
#define MOVABLE_H_

#include "Vec3.h"
#include "Quat.h"

class Movable {
public:
  Movable();
  Movable(const Vec3& position, const Quat& orientation);
  Movable(float x, float y, float z, const Quat& orientation);

  void moveAbsolute(float x, float y, float z);
  void moveAbsolute(const Vec3& v);
  void moveRelative(const Vec3& dv);
  void moveRelative(float x, float y, float z);
  void moveRelativeX(float dx);
  void moveRelativeY(float dy);
  void moveRelativeZ(float dz);

  void rotateAbsolute(const Quat& q);
  void rotateAbsolute(float x, float y, float z, float w);
  void rotateQuat(const Quat& dq);
  void rotateQuat(float dx, float dy, float dz, float dw);
  void rotateAxis(const Vec3& axis, float theta);
  void rotateAxis(float x, float y, float z, float theta); //Vetor e angulo

  const Vec3& getPosition();
  //	void rotateRelativeX(float theta);
  //	void rotateRelativeY(float theta);
  //	void rotateRelativeZ(float theta);

  Vec3 pos;
  Quat orientation;

};

#endif /* MOVABLE_H_ */
