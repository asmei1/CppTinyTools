#pragma once
#include <vector>
#include <string>

namespace sk
{
   class Parser
   {
   public:
      Parser() = delete;
      static std::vector<std::string> split(const std::string& source, const std::string& delimiter);
   };

}
