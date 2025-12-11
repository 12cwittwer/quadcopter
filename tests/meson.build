test_inc = include_directories('../src')

test_exe = executable(
  'unit_tests',
  'test_core.cpp',
  include_directories : test_inc,
  link_with : [core_lib],
  dependencies : [catch2_dep]
)

test('unit_tests', test_exe)
