/* Copyright (C) 2023 Harry Clark */

/* Pure3D DLL Library */

/* THIS FILE PERTAINS TO THE FILE MANAGEMENT INFRASTRUCTURE */
/* FOR PARSING PURE3D'S PREPRIATORY FILE FORMAT */

#pragma once

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

/* HEX VALUES FOR EACH PREPRIATORY TYPE IS */
/* PROVIDED BY THE OPEN SOURCE REIMPLEMENTATION OF SHAR */

/* https://github.com/plowteam/donut */

typedef enum FILE_TYPE : U32
{
	P3D = 0xFF443350, // P3D FILE 
	P3D_ZLIB = 0x5A443350, // P3D'S COMPRESSION METHODS
	ZLIB = 0x5A52, // ZLIB - THE COMPRESSION METHOD
};

typedef struct FILE{};
typedef char* FILENAME;
typedef FILE* SET_FILENAME(void);
typedef void(*SET_SIZE(void));

typedef struct FILE_MEMORY : FILE
{
	typedef void(*OPEN(FILE_SYSTEM));
	typedef void(*CLOSE);
	typedef void(*REMOVE_FILE);
	UNK_8* DATA;
	UNK_8* GET_MEMORY(void);
	SET_FILENAME* SET_FILE();
};

#endif

#if defined(DONUT_FILE_HIERARCHY)
#include <filesystem>
#if !defined(DONUT_NO_FILE)
#error Unable to Parse the File Type, no files exist with this extension.
#endif
#endif

typedef struct FILE_SYSTEM{};
typedef struct FILE_CHUNK{};


/* MACROS FOR STATICALLY DECLARED DATA HANDLERS */
/* USED SO THAT WHEN YOU PARSE INFORMATION THROUGH */
/* THE DIRECTIVES, THE MACRO WILL KNOW WHAT TO LOOK FOR */
/* AND ALLOCATE THE REQUIRED MEMORY */

#define GET_BYTE(DATA, COUNT, TYPE)
static GET_BYTE(&DATA = *TYPE(*UNK_ COUNT));

#define GET_WORD(DATA, COUNT, TYPE)
static GET_WORD(&DATA = *TYPE(*UNK_ COUNT));

#define GET_INT(DATA, COUNT, TYPE)
static GET_INT(&DATA = *TYPE(*UNK_ COUNT));

#define GET_LONG(DATA, COUNT, TYPE)
static GET_LONG(&DATA = *TYPE(*UNK_ COUNT));

#define GET_UNK(DATA, COUNT, TYPE)
static GET_UNK(&DATA = *TYPE(*UNK_ COUNT));

#endif
