# 0 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
# 403 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
char const* info_compiler = "INFO" ":" "compiler[" "GNU" "]";
# 683 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
char const info_version[] = {
  'I', 'N', 'F', 'O', ':',
  'c','o','m','p','i','l','e','r','_','v','e','r','s','i','o','n','[',
  ('0' + (((11) / 10000000)%10)), ('0' + (((11) / 1000000)%10)), ('0' + (((11) / 100000)%10)), ('0' + (((11) / 10000)%10)), ('0' + (((11) / 1000)%10)), ('0' + (((11) / 100)%10)), ('0' + (((11) / 10)%10)), ('0' + ((11) % 10)),

  '.', ('0' + (((2) / 10000000)%10)), ('0' + (((2) / 1000000)%10)), ('0' + (((2) / 100000)%10)), ('0' + (((2) / 10000)%10)), ('0' + (((2) / 1000)%10)), ('0' + (((2) / 100)%10)), ('0' + (((2) / 10)%10)), ('0' + ((2) % 10)),

   '.', ('0' + (((0) / 10000000)%10)), ('0' + (((0) / 1000000)%10)), ('0' + (((0) / 100000)%10)), ('0' + (((0) / 10000)%10)), ('0' + (((0) / 1000)%10)), ('0' + (((0) / 100)%10)), ('0' + (((0) / 10)%10)), ('0' + ((0) % 10)),





  ']','\0'};
# 732 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
char const* info_platform = "INFO" ":" "platform[" "Darwin" "]";
char const* info_arch = "INFO" ":" "arch[" "]";
# 754 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
const char* info_language_standard_default =
  "INFO" ":" "standard_default[" "17" "]";

const char* info_language_extensions_default = "INFO" ":" "extensions_default["




  "ON"



"]";
# 776 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
int main(int argc, char* argv[])

{
  int require = 0;
  require += info_compiler[argc];
  require += info_platform[argc];
  require += info_arch[argc];

  require += info_version[argc];
# 798 "project/radare2/builddir/meson-private/__CMake_compiler_info__/CMakeFiles/3.22.0/CompilerIdC/CMakeCCompilerId.c"
  require += info_language_standard_default[argc];
  require += info_language_extensions_default[argc];
  (void)argv;
  return require;
}
