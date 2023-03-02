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
	QWORD = 4,
	UNKNOWN = 0
};

/* MACROS FOR STATICALLY DECLARED DATA HANDLERS */
/* USED SO THAT WHEN YOU PARSE INFORMATION THROUGH */
/* THE DIRECTIVES, THE MACRO WILL KNOW WHAT TO LOOK FOR */
/* AND ALLOCATE THE REQUIRED MEMORY */

#define GET_BYTE(DATA, COUNT, TYPE)
static GET_BYTE(&DATA_TYPE::BYTE = *U8(*UNK_ COUNT));

#define GET_WORD(DATA, COUNT, TYPE)
static GET_WORD(&DATA_TYPE::WORD = *U16(*UNK_ COUNT));

#define GET_INT(DATA, COUNT, TYPE)
static GET_INT(&DATA_TYPE::DWORD = *U32(*UNK_ COUNT));

#define GET_LONG(DATA, COUNT, TYPE)
static GET_LONG(&DATA_TYPE::QWORD = *U64(*UNK_ COUNT));

#define GET_UNK(DATA, COUNT, TYPE)
static GET_UNK(&DATA_TYPE::UNKNOWN = *UNK_(*UNK_ COUNT));

#endif

#endif
