#include "lua.h"
#include "lauxlib.h"
int main(void)
{
    lua_State *L = luaL_newstate();

    // luaL_dofile(L, "dofile_example.lua");
    luaL_dostring(L, "print(1)");
    return 0;
}