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
typedef UNK_32 FREE_TEMP();
typedef UNK_32 LOAD_TEMP();

typedef struct MEMORY_STREAM { U8* DATA; };

/* READ AND PARSE THE BYTES OF THE COMPRESSED FILE TYPE */
/* RELATIVE TO THE DATA HOUSED IN THE FILE, THE DESTINATION AND LENGTH */
/* OF SAID FILE */

#define READ_BYTES(TYPE, DESTINATION, LENGTH)
static READ_BYTES(&MEMORY_STREAM::DATA = *U8 DESTINATION(UNK_ &LENGTH));

/* READ'S THE CONTENTS OF THE FILE */
/* RELATIVE TO THE POINTER POSITION AND IT'S MEMORY ADDRESS */
/* AS WELL AS THE UNKNOWN SIZE OF THE RESULT */

#define READ_FILE(POSITION, SIZE, RESULT)
static READ_FILE(U8* POSITION = &POSITION(*SIZE(*UNK_ RESULT)))

/* THIS IS TO REDUCE BOILERPLATE WITH */
/* VARIABLE DECLARATION IN FILE.CPP */

#ifndef TYPE_POINTERS
#define TYPE_POINTERS

FILENAME* FILE_NAME;
FREE_TEMP* FREE_TEMP_MEM(FILENAME);
LOAD_TEMP* ALLOC_TEMP_MEM(FILENAME);

#endif
#endif
