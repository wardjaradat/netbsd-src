/*	$NetBSD: mark_corrupt.h,v 1.1.1.1 2009/06/23 10:08:47 tron Exp $	*/

#ifndef _MARK_CORRUPT_H_INCLUDED_
#define _MARK_CORRUPT_H_INCLUDED_

/*++
/* NAME
/*	mark_corrupt 3h
/* SUMMARY
/*	mark queue file as corrupt
/* SYNOPSIS
/*	#include <mark_corrupt.h>
/* DESCRIPTION
/* .nf

 /*
  * Utility library.
  */
#include <vstream.h>

 /*
  * External interface.
  */
extern int mark_corrupt(VSTREAM *);

/* LICENSE
/* .ad
/* .fi
/*	The Secure Mailer license must be distributed with this software.
/* AUTHOR(S)
/*	Wietse Venema
/*	IBM T.J. Watson Research
/*	P.O. Box 704
/*	Yorktown Heights, NY 10598, USA
/*--*/

#endif
