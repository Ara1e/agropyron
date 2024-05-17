add_rules("mode.debug", "mode.release")
set_warnings("all", "error")
set_languages("c++17")
add_cxxflags("-Wall", "-Wextra", "-Werror", "-Wconversion",
             "-Wold-style-cast", "-Woverloaded-virtual", "-Wuninitialized",
             "-Wpointer-arith", "-Wshadow", "-Wwrite-strings")

target("1971B")
    set_kind("binary")
    add_files("src/1971B.cc")

target("1950A")
    set_kind("binary")
    add_files("src/1950A.cc")

target("1950B")
    set_kind("binary")
    add_files("src/1950B.cc")

target("1971C")
    set_kind("binary")
    add_files("src/1971C.cc")

target("1955A")
    set_kind("binary")
    add_files("src/1955A.cc")

target("1916B")
    set_kind("binary")
    add_files("src/1916B.cc")

target("1971A")
    set_kind("binary")
    add_files("src/1971A.cc")
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

