#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QPENDIALOG_LIB)
#  define QPENDIALOG_EXPORT Q_DECL_EXPORT
# else
#  define QPENDIALOG_EXPORT Q_DECL_IMPORT
# endif
#else
# define QPENDIALOG_EXPORT
#endif
