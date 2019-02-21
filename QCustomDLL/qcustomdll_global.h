#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCUSTOMDLL_LIB)
#  define QCUSTOMDLL_EXPORT Q_DECL_EXPORT
# else
#  define QCUSTOMDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCUSTOMDLL_EXPORT
#endif
