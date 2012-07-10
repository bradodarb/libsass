#define SASS_SOURCE_PROVIDER_INCLUDED

#include <string>
#include <memory>

namespace Sass
{
  class SourceProvider
  {
  public:
    virtual std::string get_path() = 0;
    virtual std::string get_content() = 0;
    virtual std::shared_ptr<SourceProvider> resolve_path(std::string path) = 0;
  };
}