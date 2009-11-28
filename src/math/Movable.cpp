#include "Movable.h"

Movable::Movable() : pos(0.0, 0.0, 0.0), orientation(0.0, 0.0, 0.0, 1.0) {
}

Movable::Movable(const Vec3& position, const Quat& orientation) :
	pos(position), orientation(orientation) {
}

Movable::Movable(float x, float y, float z, const Quat& orientation) :
	pos(x, y, z), orientation(orientation) {

}

void Movable::moveAbsolute(float x, float y, float z) {
	pos.x = x;
	pos.y = y;
	pos.z = z;
}

void Movable::moveAbsolute(const Vec3& v) {
	pos = v;
}

void Movable::moveRelative(const Vec3& dv) {
	pos += dv;
}

void Movable::moveRelative(float x, float y, float z) {
	pos.x += x;
	pos.y += y;
	pos.z += z;
}

void Movable::moveRelativeX(float dx) {
	pos.x += dx;
}

void Movable::moveRelativeY(float dy) {
	pos.y += dy;
}

void Movable::moveRelativeZ(float dz) {
	pos.z += dz;
}

void Movable::rotateAbsolute(const Quat& q) {
	orientation = q;
}

void Movable::rotateAbsolute(float x, float y, float z, float w) {
	orientation.x = x;
	orientation.y = y;
	orientation.z = z;
	orientation.w = w;
}

/*(void Movable::rotateQuat(const Quat& dq) {
	orientation = dq*orientation;
}

void Movable::rotateQuat(float dx, float dy, float dz, float dw) {
	Quat q(dx, dy, dz, dw);
	orientation = q*orientation;
}*/

void Movable::rotateAxis(const Vec3& axis, float theta) {
	Quat q;
    theta *= 0.5;
	q.fromAxisAngle(axis, theta);
	orientation = orientation*q;
}
/*
void Movable::rotateAxis(float x, float y, float z, float theta) {
	Quat q;
	q.fromAxisAngle(x, y, z, theta);
	orientation = q*orientation;
}*/

const Vec3& Movable::getPosition() {
    return pos;
}
