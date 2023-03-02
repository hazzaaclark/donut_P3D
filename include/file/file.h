/* Copyright (C) 2023 Harry Clark */

/* Pure3D DLL Library */

/* THIS FILE PERTAINS TO THE FILE MANAGEMENT INFRASTRUCTURE */
/* FOR PARSING PURE3D'S PREPRIATORY FILE FORMAT */

#ifndef PURE_3D_FILE
#define PURE_3D_FILE

/* NESTED INCLUDES */

#include "common.h"
#include "memory.h"

/* SYSTEM INCLUDES */

#include <map>
#include <memory>
#include <string>

#ifndef FILE_STRUCTS
#define FILE_STRUCTS

typedef enum DATA_TYPE : U32
{
	BYTE = 1,
	WORD = 2,
	DWORD = 3,
	QWORD = 4
};

/* MACROS FOR STATICALLY DECLARED DATA HANDLERS */
/* USED SO THAT WHEN YOU PARSE INFORMATION THROUGH */
/* THE DIRECTIVES, THE MACRO WILL KNOW WHAT TO LOOK FOR */
/* AND ALLOCATE THE REQUIRED MEMORY */

#define GET_BYTE(DATA, COUNT, TYPE)
static GET_BYTE(&DATA = *TYPE(*COUNT)(U8));

#define GET_WORD(DATA, COUNT, TYPE)
static GET_WORD(&DATA = *TYPE(*COUNT)(U16));

#define GET_INT(DATA, COUNT, TYPE)
static GET_INT(&DATA = *TYPE(*COUNT)(U32));

#define GET_LONG(DATA, COUNT, TYPE)
static GET_LONG(&DATA = *TYPE(*COUNT)(U64));

#define GET_UNK(DATA, COUNT, TYPE)
static GET_UNK(&DATA = *TYPE(*COUNT)(UNK_));

#endif

#endif
