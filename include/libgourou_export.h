
#ifndef LIBGOUROU_EXPORT_H
#define LIBGOUROU_EXPORT_H

#ifdef LIBGOUROU_STATIC_DEFINE
#  define LIBGOUROU_EXPORT
#  define LIBGOUROU_NO_EXPORT
#else
#  ifndef LIBGOUROU_EXPORT
#    ifdef gourou_EXPORTS
        /* We are building this library */
#      define LIBGOUROU_EXPORT 
#    else
        /* We are using this library */
#      define LIBGOUROU_EXPORT 
#    endif
#  endif

#  ifndef LIBGOUROU_NO_EXPORT
#    define LIBGOUROU_NO_EXPORT 
#  endif
#endif

#ifndef LIBGOUROU_DEPRECATED
#  define LIBGOUROU_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef LIBGOUROU_DEPRECATED_EXPORT
#  define LIBGOUROU_DEPRECATED_EXPORT LIBGOUROU_EXPORT LIBGOUROU_DEPRECATED
#endif

#ifndef LIBGOUROU_DEPRECATED_NO_EXPORT
#  define LIBGOUROU_DEPRECATED_NO_EXPORT LIBGOUROU_NO_EXPORT LIBGOUROU_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef LIBGOUROU_NO_DEPRECATED
#    define LIBGOUROU_NO_DEPRECATED
#  endif
#endif

#endif /* LIBGOUROU_EXPORT_H */
