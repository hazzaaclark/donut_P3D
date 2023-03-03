/* Copyright (C) 2023 Harry Clark */

/* Pure3D DLL Library */

/* THIS FILE PERTAINS TO THE MEMORY MANAGEMENT OF THIS LIBRARY */
/* THIS IS A RETOOLING OF SHAR'S SOURCE MEMORY MANAGEMENT SYSTEM */
/* FOR PARSING P3D FILES */

#ifndef PURE_3D_MMU
#define PURE_3D_MMU

/* NESTED INCLUDES */

#include "common.h"
#include "file.h"

typedef enum ALLOC_TYPE
{
	DEFAULT = 0,
	PERMANENT,
	TEMP,
	LOAD_TEMP,
	LOADED,
	MIN,
	MAX

} ALLOC;

typedef void(*MEM_SETUP)();
typedef void(*MEM_SHUTDOWN)();

typedef U32 GET_MEMORY_ALLOC(ALLOC);
typedef void SET_MEMORY_ALLOC(ALLOC, U32);

typedef struct MEMORY_ROUTER
{
	ALLOC* GET_CURRENT(void);
	ALLOC* SET_CURRENT(void);
};

typedef void(*SET_MEMORY_ROUTER(MEMORY_ROUTER));
typedef MEMORY_ROUTER* GET_MEMORY_ROUTER(void);

#endif
