#ifndef RETVAL
#define RETVAL /* a comment*/
#endif

#if TGL_FEATURE_ERROR_CHECK == 1
	GLContext* c = gl_get_context();
#error should never execute
#if TGL_FEATURE_STRICT_OOM_CHECKS == 1
	if(c->error_flag == GL_OUT_OF_MEMORY)
		return RETVAL;
#endif

#endif 

#undef RETVAL
