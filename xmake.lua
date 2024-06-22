add_rules("mode.debug", "mode.release")
set_warnings("all", "error")
set_languages("c++17")
add_cxxflags("-Wall", "-Wextra", "-Werror", "-Wconversion",
             "-Wold-style-cast", "-Woverloaded-virtual", "-Wuninitialized",
             "-Wpointer-arith", "-Wshadow", "-Wwrite-strings")

local tg = {"11A", "1971B", "1950A", "1971C", "1955A", "1968B",
            "1916B", "1971A", "1969A", "1917B", "1914A", "1910A",
            "1896B", "1948A", "1977A", "1970A1", "1971D", "1974A",
            "1957A", "1969B", "16B", "1913B", "1975A", "1951A",
            "1975C", "1967B1", "1974B", "1954A", "1985F", "1985A",
            "1985F_", "1985B", "1976B", "1985D"}

for _, name in ipairs(tg) do
    target(name)
        set_kind("binary")
        add_files("src/" .. name ..".cc")
end

--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [macosx|linux|iphoneos ..] -a [x86_64|i386|arm64 ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro definition
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--
