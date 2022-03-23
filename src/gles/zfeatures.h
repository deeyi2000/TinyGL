#ifndef _tgl_features_h_
#define _tgl_features_h_

/* It is possible to enable/disable (compile time) features in this
   header file. */

#define TGL_FEATURE_ARRAYS         1
#define TGL_FEATURE_POLYGON_OFFSET 1

/*
 * Matrix of internal and external pixel formats supported. 'Y' means
 * supported.
 * 
 *           External  8    16    32
 * Internal 
 *  32                 .     Y     Y
 *
 * Internal pixel format: 32 bits
 * External pixel format: see TGL_FEATURE_xxx_BITS 
 */

/* enable various convertion code from internal pixel format (usually
   16 bits per pixel) to any external format */
#define TGL_FEATURE_8_BITS         1
#define TGL_FEATURE_16_BITS        1
#define TGL_FEATURE_32_BITS        1

#endif /* _tgl_features_h_ */
