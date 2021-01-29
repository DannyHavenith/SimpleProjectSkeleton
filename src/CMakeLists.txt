
##          Copyright Danny Havenith 2011.
## Distributed under the Boost Software License, Version 1.0.
##    (See accompanying file LICENSE_1_0.txt or copy at
##          http://www.boost.org/LICENSE_1_0.txt)

add_executable(
	testexec

	main.cpp
	
	)

target_link_libraries(
    testexec 
    PUBLIC
        CONAN_PKG::boost
        project_options 
        )	



