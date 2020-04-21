#include "Parser.hpp"
#include <algorithm>

std::vector<std::string> sk::Parser::split(const std::string& source, const std::string& delimiter)
{
   std::vector<std::string> output;
   auto first = source.cbegin();

   while(first != source.cend())
   {
      auto second = std::find_first_of(first, source.cend(), delimiter.cbegin(), delimiter.cend());

      output.emplace_back(first, second);

      if(source.cend() == second)
      {
         break;
      }

      first = std::next(second);// +1;
   }

   return output;
}
