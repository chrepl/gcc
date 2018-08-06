/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** subr_u16_m_tied1:
**	subr	z0\.h, p0/m, z0\.h, z1\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_m_tied1, svuint16_t,
		z0 = svsubr_u16_m (p0, z0, z1),
		z0 = svsubr_m (p0, z0, z1))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (subr_u16_m_tied2, svuint16_t,
		z1 = svsubr_u16_m (p0, z0, z1),
		z1 = svsubr_m (p0, z0, z1))

/*
** subr_u16_m_untied:
**	movprfx	z0, z1
**	subr	z0\.h, p0/m, z0\.h, z2\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_m_untied, svuint16_t,
		z0 = svsubr_u16_m (p0, z1, z2),
		z0 = svsubr_m (p0, z1, z2))

/*
** subr_w0_u16_m_tied1:
**	mov	(z[0-9]+\.h), w0
**	subr	z0\.h, p0/m, z0\.h, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_w0_u16_m_tied1, svuint16_t, uint16_t,
		 z0 = svsubr_n_u16_m (p0, z0, x0),
		 z0 = svsubr_m (p0, z0, x0))

/*
** subr_w0_u16_m_untied:
**	mov	(z[0-9]+\.h), w0
**	movprfx	z0, z1
**	subr	z0\.h, p0/m, z0\.h, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_w0_u16_m_untied, svuint16_t, uint16_t,
		 z0 = svsubr_n_u16_m (p0, z1, x0),
		 z0 = svsubr_m (p0, z1, x0))

/*
** subr_h0_u16_m_tied1:
**	mov	(z[0-9]+\.h), h0
**	subr	z1\.h, p0/m, z1\.h, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_h0_u16_m_tied1, svuint16_t, uint16_t,
		 z1 = svsubr_n_u16_m (p0, z1, d0),
		 z1 = svsubr_m (p0, z1, d0))

/*
** subr_h0_u16_m_untied:
**	mov	(z[0-9]+\.h), h0
**	movprfx	z1, z2
**	subr	z1\.h, p0/m, z1\.h, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_h0_u16_m_untied, svuint16_t, uint16_t,
		 z1 = svsubr_n_u16_m (p0, z2, d0),
		 z1 = svsubr_m (p0, z2, d0))

/*
** subr_1_u16_m_tied1:
**	mov	(z[0-9]+\.h), #1
**	subr	z0\.h, p0/m, z0\.h, \1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u16_m_tied1, svuint16_t,
		z0 = svsubr_n_u16_m (p0, z0, 1),
		z0 = svsubr_m (p0, z0, 1))

/*
** subr_1_u16_m_untied:
**	mov	(z[0-9]+\.h), #1
**	movprfx	z0, z1
**	subr	z0\.h, p0/m, z0\.h, \1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u16_m_untied, svuint16_t,
		z0 = svsubr_n_u16_m (p0, z1, 1),
		z0 = svsubr_m (p0, z1, 1))

/*
** subr_m2_u16_m:
**	mov	(z[0-9]+\.h), #-2
**	subr	z0\.h, p0/m, z0\.h, \1
**	ret
*/
TEST_UNIFORM_Z (subr_m2_u16_m, svuint16_t,
		z0 = svsubr_n_u16_m (p0, z0, -2),
		z0 = svsubr_m (p0, z0, -2))

/*
** subr_u16_z_tied1:
**	movprfx	z0\.h, p0/z, z0\.h
**	subr	z0\.h, p0/m, z0\.h, z1\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_z_tied1, svuint16_t,
		z0 = svsubr_u16_z (p0, z0, z1),
		z0 = svsubr_z (p0, z0, z1))

/*
** subr_u16_z_tied2:
**	movprfx	z1\.h, p0/z, z1\.h
**	sub	z1\.h, p0/m, z1\.h, z0\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_z_tied2, svuint16_t,
		z1 = svsubr_u16_z (p0, z0, z1),
		z1 = svsubr_z (p0, z0, z1))

/*
** subr_u16_z_untied:
**	movprfx	z0\.h, p0/z, z2\.h
**	sub	z0\.h, p0/m, z0\.h, z1\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_z_untied, svuint16_t,
		z0 = svsubr_u16_z (p0, z1, z2),
		z0 = svsubr_z (p0, z1, z2))

/*
** subr_w0_u16_z_tied1:
**	mov	(z[0-9]+\.h), w0
**	movprfx	z0\.h, p0/z, z0\.h
**	subr	z0\.h, p0/m, z0\.h, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_w0_u16_z_tied1, svuint16_t, uint16_t,
		 z0 = svsubr_n_u16_z (p0, z0, x0),
		 z0 = svsubr_z (p0, z0, x0))

/*
** subr_w0_u16_z_untied:
**	mov	(z[0-9]+\.h), w0
**	movprfx	z0\.h, p0/z, \1
**	sub	z0\.h, p0/m, z0\.h, z1\.h
**	ret
*/
TEST_UNIFORM_ZS (subr_w0_u16_z_untied, svuint16_t, uint16_t,
		 z0 = svsubr_n_u16_z (p0, z1, x0),
		 z0 = svsubr_z (p0, z1, x0))

/*
** subr_h0_u16_z_tied1:
**	mov	(z[0-9]+\.h), h0
**	movprfx	z1\.h, p0/z, z1\.h
**	subr	z1\.h, p0/m, z1\.h, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_h0_u16_z_tied1, svuint16_t, uint16_t,
		 z1 = svsubr_n_u16_z (p0, z1, d0),
		 z1 = svsubr_z (p0, z1, d0))

/*
** subr_h0_u16_z_untied:
**	mov	(z[0-9]+\.h), h0
**	movprfx	z1\.h, p0/z, \1
**	sub	z1\.h, p0/m, z1\.h, z2\.h
**	ret
*/
TEST_UNIFORM_ZS (subr_h0_u16_z_untied, svuint16_t, uint16_t,
		 z1 = svsubr_n_u16_z (p0, z2, d0),
		 z1 = svsubr_z (p0, z2, d0))

/*
** subr_u16_x_tied1:
**	sub	z0\.h, z1\.h, z0\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_x_tied1, svuint16_t,
		z0 = svsubr_u16_x (p0, z0, z1),
		z0 = svsubr_x (p0, z0, z1))

/*
** subr_u16_x_tied2:
**	sub	z1\.h, z1\.h, z0\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_x_tied2, svuint16_t,
		z1 = svsubr_u16_x (p0, z0, z1),
		z1 = svsubr_x (p0, z0, z1))

/*
** subr_u16_x_untied:
**	sub	z2\.h, z1\.h, z0\.h
**	ret
*/
TEST_UNIFORM_Z (subr_u16_x_untied, svuint16_t,
		z2 = svsubr_u16_x (p0, z0, z1),
		z2 = svsubr_x (p0, z0, z1))

/*
** subr_w0_u16_x_tied1:
**	mov	(z[0-9]+\.h), w0
**	sub	z0\.h, \1, z0\.h
**	ret
*/
TEST_UNIFORM_ZS (subr_w0_u16_x_tied1, svuint16_t, uint16_t,
		 z0 = svsubr_n_u16_x (p0, z0, x0),
		 z0 = svsubr_x (p0, z0, x0))

/*
** subr_w0_u16_x_untied:
**	mov	(z[0-9]+\.h), w0
**	sub	z1\.h, \1, z0\.h
**	ret
*/
TEST_UNIFORM_ZS (subr_w0_u16_x_untied, svuint16_t, uint16_t,
		 z1 = svsubr_n_u16_x (p0, z0, x0),
		 z1 = svsubr_x (p0, z0, x0))

/*
** subr_h0_u16_x_tied1:
**	mov	(z[0-9]+\.h), h0
**	sub	z1\.h, \1, z1\.h
**	ret
*/
TEST_UNIFORM_ZS (subr_h0_u16_x_tied1, svuint16_t, uint16_t,
		 z1 = svsubr_n_u16_x (p0, z1, d0),
		 z1 = svsubr_x (p0, z1, d0))

/*
** subr_h0_u16_x_untied:
**	mov	(z[0-9]+\.h), h0
**	sub	z2\.h, \1, z1\.h
**	ret
*/
TEST_UNIFORM_ZS (subr_h0_u16_x_untied, svuint16_t, uint16_t,
		 z2 = svsubr_n_u16_x (p0, z1, d0),
		 z2 = svsubr_x (p0, z1, d0))

/*
** subr_1_u16_x_tied1:
**	subr	z0\.h, z0\.h, #1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u16_x_tied1, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 1),
		z0 = svsubr_x (p0, z0, 1))

/*
** subr_1_u16_x_untied:
**	movprfx	z0, z1
**	subr	z0\.h, z0\.h, #1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u16_x_untied, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z1, 1),
		z0 = svsubr_x (p0, z1, 1))

/*
** subr_127_u16_x:
**	subr	z0\.h, z0\.h, #127
**	ret
*/
TEST_UNIFORM_Z (subr_127_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 127),
		z0 = svsubr_x (p0, z0, 127))

/*
** subr_128_u16_x:
**	subr	z0\.h, z0\.h, #128
**	ret
*/
TEST_UNIFORM_Z (subr_128_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 128),
		z0 = svsubr_x (p0, z0, 128))

/*
** subr_255_u16_x:
**	subr	z0\.h, z0\.h, #255
**	ret
*/
TEST_UNIFORM_Z (subr_255_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 255),
		z0 = svsubr_x (p0, z0, 255))

/*
** subr_256_u16_x:
**	subr	z0\.h, z0\.h, #256
**	ret
*/
TEST_UNIFORM_Z (subr_256_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 256),
		z0 = svsubr_x (p0, z0, 256))

/*
** subr_257_u16_x:
**	mov	(z[0-9]+)\.b, #1
**	sub	z0\.h, \1\.h, z0\.h
**	ret
*/
TEST_UNIFORM_Z (subr_257_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 257),
		z0 = svsubr_x (p0, z0, 257))

/*
** subr_512_u16_x:
**	subr	z0\.h, z0\.h, #512
**	ret
*/
TEST_UNIFORM_Z (subr_512_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 512),
		z0 = svsubr_x (p0, z0, 512))

/*
** subr_65280_u16_x:
**	subr	z0\.h, z0\.h, #65280
**	ret
*/
TEST_UNIFORM_Z (subr_65280_u16_x, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, 0xff00),
		z0 = svsubr_x (p0, z0, 0xff00))

/*
** subr_m1_u16_x_tied1:
**	mov	(z[0-9]+)\.b, #-1
**	sub	z0\.h, \1\.h, z0\.h
**	ret
*/
TEST_UNIFORM_Z (subr_m1_u16_x_tied1, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z0, -1),
		z0 = svsubr_x (p0, z0, -1))

/*
** subr_m1_u16_x_untied:
**	mov	(z[0-9]+)\.b, #-1
**	sub	z0\.h, \1\.h, z1\.h
**	ret
*/
TEST_UNIFORM_Z (subr_m1_u16_x_untied, svuint16_t,
		z0 = svsubr_n_u16_x (p0, z1, -1),
		z0 = svsubr_x (p0, z1, -1))
