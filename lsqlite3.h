#if !defined( __lsqlite3_h__)
#define __lsqlite3_h__ 1

#define LUA_LIB
#include "lua.h"
#include "lauxlib.h"

#if defined(_WIN32)
#define LSQLITE3_API __declspec(dllexport) 
#else
#define LSQLITE3_API extern
#endif

LSQLITE3_API int luaopen_lsqlite3(lua_State *L);

#endif // __lsqlite3_h__