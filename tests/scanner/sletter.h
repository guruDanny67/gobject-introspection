#ifndef __SLETTER_H__
#define __SLETTER_H__

#include <gio/gio.h>

typedef struct {
  double x;
  double y;
} SPoint;

void s_hello (void);

/* Like GSpawnError; not registered with GType */
typedef enum
{
  S_SPAWN_ERROR_CODE1 = 1,
  S_SPAWN_ERROR_CODE2 = 2,
  S_SPAWN_ERROR_CODE3 = 3
} SSpawnError;
GQuark s_spawn_error_quark (void);

#endif
