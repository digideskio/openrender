/*
 *  point3D.h
 *  openRender
 *
 *  Description:
 *    {Description}
 *
 *  Creation:
 *    Fri Nov 15 2002
 *
 *  Original Development:
 *    (C) 2006 by Juvenal A. Silva Jr. <juvenal.silva@v2-home.com.br>
 *
 *  Contributions:
 *
 *  Statement:
 *    This program is free software, you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 2 of the License, or
 *    (at your option) any later version.
 *
 *  $Id: point3D.h,v 1.8 2008/07/15 03:24:58 juvenal.silva Exp $
 */

#ifndef _POINT3D_H
#define _POINT3D_H

// Superclass include
#include "vector3D.h"

// Define basic type vector3D
class Point3D: public Vector3D {
    public:
        // Constructors
        Point3D(Vector3D v);
        Point3D(float _x = 0, float _y = 0, float _z = 0);
        // All the other methods inherited from
        // parent superclass vector3D
};

#endif /* _POINT3D_H */
