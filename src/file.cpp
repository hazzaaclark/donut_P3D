/* Copyright (C) 2023 Harry Clark */

/* Pure3D DLL Library */

/* THIS FILE PERTAINS TO THE MEMORY MANAGEMENT OF THIS LIBRARY */
/* THIS IS A RETOOLING OF SHAR'S SOURCE MEMORY MANAGEMENT SYSTEM */
/* FOR PARSING P3D FILES */


#define PURE_3D_FILE_

/* NESTED INCLUDES */

#include "common.h"
#include "file.h"
#include "memory.h"

static FILE* GET_FILE()
{
	FILENAME* FILENAME = NULL;
}

static FILE* REMOVE_FILE()
{
	FILE_MEMORY::REMOVE_FILE();
}

static SET_FILENAME* SET_FILE_NAME(void)
{
	if (FILENAME())
	{
		UNK_32* FREE_TEMP(FILENAME());
	}
}