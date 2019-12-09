#include "lua.h"
#include "lauxlib.h"
// #define SOURCE_CODE "g = 10 function fun () local a = 2 function test() local b = 1 print(a, b, g) end test() end fun()"
// #define SOURCE_CODE "local function b() end g = 10 b()"
// #define SOURCE_CODE "local b = {a=1,b=2,c=3} print(b.a)"
// #define SOURCE_CODE "print(1)"
#define SOURCE_CODE "function foo() local a = 1 end"
int main(void)
{
    lua_State *L = luaL_newstate();

    int status = luaL_dostring(L, SOURCE_CODE);
    printf("%d\n", status);
    // luaL_dostring(L, "print(1)");
    return 0;
}