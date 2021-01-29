/**
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */


#include <iostream>
#include <exception>


void error( const std::string &what)
{
    throw std::runtime_error( what);
}

int main(int argc, char* argv[])
{

    try
    {
        std::cout << "It's working!\n";
    }
    catch (std::exception &e)
    {
	std::cerr << "something went wrong: " << e.what() << '\n';
    }

    return 0;
}

