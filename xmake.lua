set_xmakever("2.8.2")

includes("lib/commonlibf4")

set_project("f4se-no-console-spam")
set_version("0.1.0")
set_license("GPL-3.0")

set_languages("c++23")
set_warnings("allextra")

set_policy("package.requires_lock", true)

add_rules("mode.debug", "mode.releasedbg")
add_rules("plugin.vsxmake.autoupdate")

target("f4se-no-console-spam")
    add_deps("commonlibf4")

    add_rules("commonlibf4.plugin", {
        name = "no-console-spam",
        author = "qudix",
        description = "BEGONE CONSOLE SPAM!"
    })

    add_files("src/**.cpp")
    add_headerfiles("src/**.h")
    add_includedirs("src")
    set_pcxxheader("src/pch.h")
