#ifndef __QUATERNION_H__
#define __QUATERNION_H__

#include "core/vector.hpp"

namespace core {

	struct quaternion_t {
		float32 i,j,k,w;

		quaternion_t();
		quaternion_t(float32 _i,float32 _j,float32 _k,float32 _w);

		quaternion_t operator+ () const;
		quaternion_t operator- () const;

		const vec4& asVector() const;
		quaternion_t inverse() const;
	};

	const quaternion_t& asQuaternion (const vec4&);

	float32 Dot (const quaternion_t&,const quaternion_t&);
	quaternion_t Blend (const quaternion_t&,const quaternion_t&,float32=.5);
	quaternion_t Concatenate (const quaternion_t&,const quaternion_t&);
	quaternion_t Integrate (const quaternion_t&,vec3,float32=1.);
	quaternion_t Integrate (const quaternion_t&,const quaternion_t&,float32=1.);
	quaternion_t Product (const quaternion_t&,const quaternion_t&);

	std::ostream& operator<< ( std::ostream&, const quaternion_t& );

}

#endif//__QUATERNION_H__
