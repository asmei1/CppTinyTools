#pragma once
#include <cpptinytools/Parser.hpp>
#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
   for (auto && token : sk::Parser::split("Some text", " "))
   {
      std::cout << token << std::endl;
   }

   auto&& tokens = sk::Parser::split("Some text", " ");

   auto print = [](const auto& p) {std::cout << p; };
   std::for_each(tokens.cbegin(), tokens.cend(), print);
   return 0;
}
