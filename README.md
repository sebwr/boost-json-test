# boost-json-test
This project reproduces the linking error of boost json in version 1.78.0

## How to build

1) `mkdir build && cd build`
2) `cmake ..`
3) `make`



## Expected Error with version 1.78.0

```bash
/usr/bin/ld: CMakeFiles/boostJsonTest.dir/main.cpp.o: in function `main':
main.cpp:(.text+0x1de): undefined reference to `boost::json::parse(boost::basic_string_view<char, std::char_traits<char> >, boost::json::storage_ptr, boost::json::parse_options const&)'
/usr/bin/ld: main.cpp:(.text+0x211): undefined reference to `boost::json::value::~value()'
/usr/bin/ld: main.cpp:(.text+0x22f): undefined reference to `boost::json::object::~object()'
/usr/bin/ld: main.cpp:(.text+0x292): undefined reference to `boost::json::value::~value()'
/usr/bin/ld: CMakeFiles/boostJsonTest.dir/main.cpp.o: in function `boost::json::object::object(boost::json::object const&)':
main.cpp:(.text._ZN5boost4json6objectC2ERKS1_[_ZN5boost4json6objectC5ERKS1_]+0x4a): undefined reference to `boost::json::object::object(boost::json::object const&, boost::json::storage_ptr)'
/usr/bin/ld: CMakeFiles/boostJsonTest.dir/main.cpp.o: in function `boost::json::value::as_object()':
main.cpp:(.text._ZN5boost4json5value9as_objectEv[_ZN5boost4json5value9as_objectEv]+0x66): undefined reference to `boost::json::detail::throw_invalid_argument(char const*, boost::source_location const&)'
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/boostJsonTest.dir/build.make:84: boostJsonTest] Error 1
make[1]: *** [CMakeFiles/Makefile2:76: CMakeFiles/boostJsonTest.dir/all] Error 2
make: *** [Makefile:84: all] Error 2
```
