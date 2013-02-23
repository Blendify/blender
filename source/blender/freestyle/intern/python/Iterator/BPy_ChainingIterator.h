/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2010 Blender Foundation.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file source/blender/freestyle/intern/python/Iterator/BPy_ChainingIterator.h
 *  \ingroup freestyle
 */

#ifndef __FREESTYLE_PYTHON_CHAININGITERATOR_H__
#define __FREESTYLE_PYTHON_CHAININGITERATOR_H__


#include "../../stroke/ChainingIterators.h"

#include "BPy_ViewEdgeIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////////////////////

#include <Python.h>

extern PyTypeObject ChainingIterator_Type;

#define BPy_ChainingIterator_Check(v) (PyObject_IsInstance((PyObject *)v, (PyObject *)&ChainingIterator_Type))

/*---------------------------Python BPy_ChainingIterator structure definition----------*/
typedef struct {
	BPy_ViewEdgeIterator py_ve_it;
	ChainingIterator *c_it;
} BPy_ChainingIterator;

///////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif

#endif /* __FREESTYLE_PYTHON_CHAININGITERATOR_H__ */
