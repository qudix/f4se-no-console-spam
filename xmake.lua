-- set minimum xmake version
set_xmakever("2.8.2")

-- includes
includes("lib/commonlibf4")

-- set project
set_project("f4se-no-console-spam")
set_version("0.1.0")
set_license("GPL-3.0")

-- set defaults
set_languages("c++23")
set_warnings("allextra")

-- set policies
set_policy("package.requires_lock", true)

-- add rules
add_rules("mode.debug", "mode.releasedbg")
add_rules("plugin.vsxmake.autoupdate")

-- targets
target("f4se-no-console-spam")
    -- add dependencies to target
    add_deps("commonlibf4")

    -- add commonlibsse plugin
    add_rules("commonlibf4.plugin", {
        name = "no-console-spam",
        author = "qudix",
        description = "F4SE plugin template using CommonLibF4"
    })

    -- add src files
    add_files("src/**.cpp")
    add_headerfiles("src/**.h")
    add_includedirs("src")
    set_pcxxheader("src/pch.h")
