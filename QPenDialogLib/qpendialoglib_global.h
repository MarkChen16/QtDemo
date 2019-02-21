#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QPENDIALOGLIB_LIB)
#  define QPENDIALOGLIB_EXPORT Q_DECL_EXPORT
# else
#  define QPENDIALOGLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define QPENDIALOGLIB_EXPORT
#endif
