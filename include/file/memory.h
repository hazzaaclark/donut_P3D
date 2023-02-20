/* Copyright (C) 2023 Harry Clark */

/* Pure3D DLL Library */

/* THIS FILE PERTAINS TO THE MEMORY MANAGEMENT OF THIS LIBRARY */
/* THIS IS A RETOOLING OF SHAR'S SOURCE MEMORY MANAGEMENT SYSTEM */
/* FOR PARSING P3D FILES */

#ifndef PURE_3D_MMU
#define PURE_3D_MMU

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

typedef ALLOC* GET_CURRENT(void);
typedef ALLOC* SET_CURRENT(void);
typedef void(*MEM_SETUP)();
typedef void(*MEM_SHUTDOWN)();


#endif