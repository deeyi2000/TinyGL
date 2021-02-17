#include "../include/GL/gl.h"
#include <stdarg.h>
#include <stdio.h>
#include "zgl.h"
//#define NDEBUG

#ifdef NDEBUG
#define NO_DEBUG_OUTPUT
#endif

/* Use this function to output messages when something unexpected
   happens (which might be an indication of an error). *Don't* use it
   when there's GLinternal errors in the code - these should be handled
   by asserts. */
void tgl_warning(const char* format, ...) {
#ifndef NO_DEBUG_OUTPUT
	va_list args;
	va_start(args, format);
	fprintf(stderr, "*WARNING* ");
	vfprintf(stderr, format, args);
	va_end(args);
#endif /* !NO_DEBUG_OUTPUT */
}

/* This function should be used for debug output only. */
void tgl_trace(const char* format, ...) {
#ifndef NO_DEBUG_OUTPUT
	va_list args;
	va_start(args, format);
	fprintf(stderr, "*DEBUG* ");
	vfprintf(stderr, format, args);
	va_end(args);
#endif /* !NO_DEBUG_OUTPUT */
}

/* Use this function to output info about things in the code which
   should be fixed (missing handling of special cases, important
   features not implemented, known bugs/buglets, ...). */
void tgl_fixme(const char* format, ...) {
#ifndef NO_DEBUG_OUTPUT
	va_list args;
	va_start(args, format);
	fprintf(stderr, "*FIXME* ");
	vfprintf(stderr, format, args);
	va_end(args);
#endif /* !NO_DEBUG_OUTPUT */
}


void gl_fatal_error(char* format, ...) {
	va_list ap;

	va_start(ap, format);

	fprintf(stderr, "TinyGL: fatal error: ");
	vfprintf(stderr, format, ap);
	fprintf(stderr, "\n");
	exit(1);
	va_end(ap);
}
